#include "ofApp.h"

float sines[514]={0,0.012268,0.024536,0.036804,0.049042,0.06131,0.073547,0.085785,0.097992,0.1102,0.12241,0.13455,0.1467,0.15884,0.17093,0.18301,0.19507,0.20709,0.21909,0.23105,0.24295,0.25485,0.26669,0.2785,0.29025,0.30197,0.31366,0.32529,0.33685,0.34839,0.35986,0.37128,0.38266,0.39395,0.40521,0.41641,0.42752,0.4386,0.44958,0.46051,0.47137,0.48215,0.49286,0.50351,0.51407,0.52457,0.53497,0.54529,0.55554,0.5657,0.57578,0.58575,0.59567,0.60547,0.6152,0.62482,0.63437,0.6438,0.65314,0.66238,0.67151,0.68057,0.68951,0.69833,0.70706,0.7157,0.72421,0.7326,0.74091,0.74908,0.75717,0.76514,0.77298,0.7807,0.7883,0.79581,0.80316,0.81042,0.81754,0.82455,0.83142,0.8382,0.84482,0.85132,0.8577,0.86392,0.87006,0.87604,0.88187,0.8876,0.89319,0.89862,0.90396,0.90912,0.91415,0.91907,0.92383,0.92847,0.93295,0.93729,0.9415,0.94556,0.94949,0.95325,0.95691,0.96039,0.96375,0.96692,0.97,0.9729,0.97565,0.97827,0.98074,0.98306,0.98523,0.98724,0.98914,0.99084,0.99243,0.99387,0.99515,0.99628,0.99725,0.99808,0.99875,0.99927,0.99966,0.99988,0.99997,0.99988,0.99966,0.99927,0.99875,0.99808,0.99725,0.99628,0.99515,0.99387,0.99243,0.99084,0.98914,0.98724,0.98523,0.98306,0.98074,0.97827,0.97565,0.9729,0.97,0.96692,0.96375,0.96039,0.95691,0.95325,0.94949,0.94556,0.9415,0.93729,0.93295,0.92847,0.92383,0.91907,0.91415,0.90912,0.90396,0.89862,0.89319,0.8876,0.88187,0.87604,0.87006,0.86392,0.8577,0.85132,0.84482,0.8382,0.83142,0.82455,0.81754,0.81042,0.80316,0.79581,0.7883,0.7807,0.77298,0.76514,0.75717,0.74908,0.74091,0.7326,0.72421,0.7157,0.70706,0.69833,0.68951,0.68057,0.67151,0.66238,0.65314,0.6438,0.63437,0.62482,0.6152,0.60547,0.59567,0.58575,0.57578,0.5657,0.55554,0.54529,0.53497,0.52457,0.51407,0.50351,0.49286,0.48215,0.47137,0.46051,0.44958,0.4386,0.42752,0.41641,0.40521,0.39395,0.38266,0.37128,0.35986,0.34839,0.33685,0.32529,0.31366,0.30197,0.29025,0.2785,0.26669,0.25485,0.24295,0.23105,0.21909,0.20709,0.19507,0.18301,0.17093,0.15884,0.1467,0.13455,0.12241,0.1102,0.097992,0.085785,0.073547,0.06131,0.049042,0.036804,0.024536,0.012268,0,-0.012268,-0.024536,-0.036804,-0.049042,-0.06131,-0.073547,-0.085785,-0.097992,-0.1102,-0.12241,-0.13455,-0.1467,-0.15884,-0.17093,-0.18301,-0.19507,-0.20709,-0.21909,-0.23105,-0.24295,-0.25485,-0.26669,-0.2785,-0.29025,-0.30197,-0.31366,-0.32529,-0.33685,-0.34839,-0.35986,-0.37128,-0.38266,-0.39395,-0.40521,-0.41641,-0.42752,-0.4386,-0.44958,-0.46051,-0.47137,-0.48215,-0.49286,-0.50351,-0.51407,-0.52457,-0.53497,-0.54529,-0.55554,-0.5657,-0.57578,-0.58575,-0.59567,-0.60547,-0.6152,-0.62482,-0.63437,-0.6438,-0.65314,-0.66238,-0.67151,-0.68057,-0.68951,-0.69833,-0.70706,-0.7157,-0.72421,-0.7326,-0.74091,-0.74908,-0.75717,-0.76514,-0.77298,-0.7807,-0.7883,-0.79581,-0.80316,-0.81042,-0.81754,-0.82455,-0.83142,-0.8382,-0.84482,-0.85132,-0.8577,-0.86392,-0.87006,-0.87604,-0.88187,-0.8876,-0.89319,-0.89862,-0.90396,-0.90912,-0.91415,-0.91907,-0.92383,-0.92847,-0.93295,-0.93729,-0.9415,-0.94556,-0.94949,-0.95325,-0.95691,-0.96039,-0.96375,-0.96692,-0.97,-0.9729,-0.97565,-0.97827,-0.98074,-0.98306,-0.98523,-0.98724,-0.98914,-0.99084,-0.99243,-0.99387,-0.99515,-0.99628,-0.99725,-0.99808,-0.99875,-0.99927,-0.99966,-0.99988,-0.99997,-0.99988,-0.99966,-0.99927,-0.99875,-0.99808,-0.99725,-0.99628,-0.99515,-0.99387,-0.99243,-0.99084,-0.98914,-0.98724,-0.98523,-0.98306,-0.98074,-0.97827,-0.97565,-0.9729,-0.97,-0.96692,-0.96375,-0.96039,-0.95691,-0.95325,-0.94949,-0.94556,-0.9415,-0.93729,-0.93295,-0.92847,-0.92383,-0.91907,-0.91415,-0.90912,-0.90396,-0.89862,-0.89319,-0.8876,-0.88187,-0.87604,-0.87006,-0.86392,-0.8577,-0.85132,-0.84482,-0.8382,-0.83142,-0.82455,-0.81754,-0.81042,-0.80316,-0.79581,-0.7883,-0.7807,-0.77298,-0.76514,-0.75717,-0.74908,-0.74091,-0.7326,-0.72421,-0.7157,-0.70706,-0.69833,-0.68951,-0.68057,-0.67151,-0.66238,-0.65314,-0.6438,-0.63437,-0.62482,-0.6152,-0.60547,-0.59567,-0.58575,-0.57578,-0.5657,-0.55554,-0.54529,-0.53497,-0.52457,-0.51407,-0.50351,-0.49286,-0.48215,-0.47137,-0.46051,-0.44958,-0.4386,-0.42752,-0.41641,-0.40521,-0.39395,-0.38266,-0.37128,-0.35986,-0.34839,-0.33685,-0.32529,-0.31366,-0.30197,-0.29025,-0.2785,-0.26669,-0.25485,-0.24295,-0.23105,-0.21909,-0.20709,-0.19507,-0.18301,-0.17093,-0.15884,-0.1467,-0.13455,-0.12241,-0.1102,-0.097992,-0.085785,-0.073547,-0.06131,-0.049042,-0.036804,-0.024536,-0.012268,0,0.012268
};


float sawBuffer[514] = {0,-1.00000,-0.99609,-0.99217,-0.98826,-0.98434,-0.98043,-0.97652,-0.97260,-0.96869,-0.96477,-0.96086,-0.95695,-0.95303,-0.94912,-0.94521,-0.94129,-0.93738,-0.93346,-0.92955,-0.92564,-0.92172,-0.91781,-0.91389,-0.90998,-0.90607,-0.90215,-0.89824,-0.89432,-0.89041,-0.88650,-0.88258,-0.87867,-0.87476,-0.87084,-0.86693,-0.86301,-0.85910,-0.85519,-0.85127,-0.84736,-0.84344,-0.83953,-0.83562,-0.83170,-0.82779,-0.82387,-0.81996,-0.81605,-0.81213,-0.80822,-0.80431,-0.80039,-0.79648,-0.79256,-0.78865,-0.78474,-0.78082,-0.77691,-0.77299,-0.76908,-0.76517,-0.76125,-0.75734,-0.75342,-0.74951,-0.74560,-0.74168,-0.73777,-0.73386,-0.72994,-0.72603,-0.72211,-0.71820,-0.71429,-0.71037,-0.70646,-0.70254,-0.69863,-0.69472,-0.69080,-0.68689,-0.68297,-0.67906,-0.67515,-0.67123,-0.66732,-0.66341,-0.65949,-0.65558,-0.65166,-0.64775,-0.64384,-0.63992,-0.63601,-0.63209,-0.62818,-0.62427,-0.62035,-0.61644,-0.61252,-0.60861,-0.60470,-0.60078,-0.59687,-0.59295,-0.58904,-0.58513,-0.58121,-0.57730,-0.57339,-0.56947,-0.56556,-0.56164,-0.55773,-0.55382,-0.54990,-0.54599,-0.54207,-0.53816,-0.53425,-0.53033,-0.52642,-0.52250,-0.51859,-0.51468,-0.51076,-0.50685,-0.50294,-0.49902,-0.49511,-0.49119,-0.48728,-0.48337,-0.47945,-0.47554,-0.47162,-0.46771,-0.46380,-0.45988,-0.45597,-0.45205,-0.44814,-0.44423,-0.44031,-0.43640,-0.43249,-0.42857,-0.42466,-0.42074,-0.41683,-0.41292,-0.40900,-0.40509,-0.40117,-0.39726,-0.39335,-0.38943,-0.38552,-0.38160,-0.37769,-0.37378,-0.36986,-0.36595,-0.36204,-0.35812,-0.35421,-0.35029,-0.34638,-0.34247,-0.33855,-0.33464,-0.33072,-0.32681,-0.32290,-0.31898,-0.31507,-0.31115,-0.30724,-0.30333,-0.29941,-0.29550,-0.29159,-0.28767,-0.28376,-0.27984,-0.27593,-0.27202,-0.26810,-0.26419,-0.26027,-0.25636,-0.25245,-0.24853,-0.24462,-0.24070,-0.23679,-0.23288,-0.22896,-0.22505,-0.22114,-0.21722,-0.21331,-0.20939,-0.20548,-0.20157,-0.19765,-0.19374,-0.18982,-0.18591,-0.18200,-0.17808,-0.17417,-0.17025,-0.16634,-0.16243,-0.15851,-0.15460,-0.15068,-0.14677,-0.14286,-0.13894,-0.13503,-0.13112,-0.12720,-0.12329,-0.11937,-0.11546,-0.11155,-0.10763,-0.10372,-0.09980,-0.09589,-0.09198,-0.08806,-0.08415,-0.08023,-0.07632,-0.07241,-0.06849,-0.06458,-0.06067,-0.05675,-0.05284,-0.04892,-0.04501,-0.04110,-0.03718,-0.03327,-0.02935,-0.02544,-0.02153,-0.01761,-0.01370,-0.00978,-0.00587,-0.00196,0.00196,0.00587,0.00978,0.01370,0.01761,0.02153,0.02544,0.02935,0.03327,0.03718,0.04110,0.04501,0.04892,0.05284,0.05675,0.06067,0.06458,0.06849,0.07241,0.07632,0.08023,0.08415,0.08806,0.09198,0.09589,0.09980,0.10372,0.10763,0.11155,0.11546,0.11937,0.12329,0.12720,0.13112,0.13503,0.13894,0.14286,0.14677,0.15068,0.15460,0.15851,0.16243,0.16634,0.17025,0.17417,0.17808,0.18200,0.18591,0.18982,0.19374,0.19765,0.20157,0.20548,0.20939,0.21331,0.21722,0.22114,0.22505,0.22896,0.23288,0.23679,0.24070,0.24462,0.24853,0.25245,0.25636,0.26027,0.26419,0.26810,0.27202,0.27593,0.27984,0.28376,0.28767,0.29159,0.29550,0.29941,0.30333,0.30724,0.31115,0.31507,0.31898,0.32290,0.32681,0.33072,0.33464,0.33855,0.34247,0.34638,0.35029,0.35421,0.35812,0.36204,0.36595,0.36986,0.37378,0.37769,0.38160,0.38552,0.38943,0.39335,0.39726,0.40117,0.40509,0.40900,0.41292,0.41683,0.42074,0.42466,0.42857,0.43249,0.43640,0.44031,0.44423,0.44814,0.45205,0.45597,0.45988,0.46380,0.46771,0.47162,0.47554,0.47945,0.48337,0.48728,0.49119,0.49511,0.49902,0.50294,0.50685,0.51076,0.51468,0.51859,0.52250,0.52642,0.53033,0.53425,0.53816,0.54207,0.54599,0.54990,0.55382,0.55773,0.56164,0.56556,0.56947,0.57339,0.57730,0.58121,0.58513,0.58904,0.59295,0.59687,0.60078,0.60470,0.60861,0.61252,0.61644,0.62035,0.62427,0.62818,0.63209,0.63601,0.63992,0.64384,0.64775,0.65166,0.65558,0.65949,0.66341,0.66732,0.67123,0.67515,0.67906,0.68297,0.68689,0.69080,0.69472,0.69863,0.70254,0.70646,0.71037,0.71429,0.71820,0.72211,0.72603,0.72994,0.73386,0.73777,0.74168,0.74560,0.74951,0.75342,0.75734,0.76125,0.76517,0.76908,0.77299,0.77691,0.78082,0.78474,0.78865,0.79256,0.79648,0.80039,0.80431,0.80822,0.81213,0.81605,0.81996,0.82387,0.82779,0.83170,0.83562,0.83953,0.84344,0.84736,0.85127,0.85519,0.85910,0.86301,0.86693,0.87084,0.87476,0.87867,0.88258,0.88650,0.89041,0.89432,0.89824,0.90215,0.90607,0.90998,0.91389,0.91781,0.92172,0.92564,0.92955,0.93346,0.93738,0.94129,0.94521,0.94912,0.95303,0.95695,0.96086,0.96477,0.96869,0.97260,0.97652,0.98043,0.98434,0.98826,0.99217,0.99609,-1.00000,0};


float triBuffer[514] = {0,-1.00000,-0.99217,-0.98434,-0.97652,-0.96869,-0.96086,-0.95303,-0.94521,-0.93738,-0.92955,-0.92172,-0.91389,-0.90607,-0.89824,-0.89041,-0.88258,-0.87476,-0.86693,-0.85910,-0.85127,-0.84344,-0.83562,-0.82779,-0.81996,-0.81213,-0.80431,-0.79648,-0.78865,-0.78082,-0.77299,-0.76517,-0.75734,-0.74951,-0.74168,-0.73386,-0.72603,-0.71820,-0.71037,-0.70254,-0.69472,-0.68689,-0.67906,-0.67123,-0.66341,-0.65558,-0.64775,-0.63992,-0.63209,-0.62427,-0.61644,-0.60861,-0.60078,-0.59295,-0.58513,-0.57730,-0.56947,-0.56164,-0.55382,-0.54599,-0.53816,-0.53033,-0.52250,-0.51468,-0.50685,-0.49902,-0.49119,-0.48337,-0.47554,-0.46771,-0.45988,-0.45205,-0.44423,-0.43640,-0.42857,-0.42074,-0.41292,-0.40509,-0.39726,-0.38943,-0.38160,-0.37378,-0.36595,-0.35812,-0.35029,-0.34247,-0.33464,-0.32681,-0.31898,-0.31115,-0.30333,-0.29550,-0.28767,-0.27984,-0.27202,-0.26419,-0.25636,-0.24853,-0.24070,-0.23288,-0.22505,-0.21722,-0.20939,-0.20157,-0.19374,-0.18591,-0.17808,-0.17025,-0.16243,-0.15460,-0.14677,-0.13894,-0.13112,-0.12329,-0.11546,-0.10763,-0.09980,-0.09198,-0.08415,-0.07632,-0.06849,-0.06067,-0.05284,-0.04501,-0.03718,-0.02935,-0.02153,-0.01370,-0.00587,0.00196,0.00978,0.01761,0.02544,0.03327,0.04110,0.04892,0.05675,0.06458,0.07241,0.08023,0.08806,0.09589,0.10372,0.11155,0.11937,0.12720,0.13503,0.14286,0.15068,0.15851,0.16634,0.17417,0.18200,0.18982,0.19765,0.20548,0.21331,0.22114,0.22896,0.23679,0.24462,0.25245,0.26027,0.26810,0.27593,0.28376,0.29159,0.29941,0.30724,0.31507,0.32290,0.33072,0.33855,0.34638,0.35421,0.36204,0.36986,0.37769,0.38552,0.39335,0.40117,0.40900,0.41683,0.42466,0.43249,0.44031,0.44814,0.45597,0.46380,0.47162,0.47945,0.48728,0.49511,0.50294,0.51076,0.51859,0.52642,0.53425,0.54207,0.54990,0.55773,0.56556,0.57339,0.58121,0.58904,0.59687,0.60470,0.61252,0.62035,0.62818,0.63601,0.64384,0.65166,0.65949,0.66732,0.67515,0.68297,0.69080,0.69863,0.70646,0.71429,0.72211,0.72994,0.73777,0.74560,0.75342,0.76125,0.76908,0.77691,0.78474,0.79256,0.80039,0.80822,0.81605,0.82387,0.83170,0.83953,0.84736,0.85519,0.86301,0.87084,0.87867,0.88650,0.89432,0.90215,0.90998,0.91781,0.92564,0.93346,0.94129,0.94912,0.95695,0.96477,0.97260,0.98043,0.98826,0.99609,0.99609,0.98826,0.98043,0.97260,0.96477,0.95695,0.94912,0.94129,0.93346,0.92564,0.91781,0.90998,0.90215,0.89432,0.88650,0.87867,0.87084,0.86301,0.85519,0.84736,0.83953,0.83170,0.82387,0.81605,0.80822,0.80039,0.79256,0.78474,0.77691,0.76908,0.76125,0.75342,0.74560,0.73777,0.72994,0.72211,0.71429,0.70646,0.69863,0.69080,0.68297,0.67515,0.66732,0.65949,0.65166,0.64384,0.63601,0.62818,0.62035,0.61252,0.60470,0.59687,0.58904,0.58121,0.57339,0.56556,0.55773,0.54990,0.54207,0.53425,0.52642,0.51859,0.51076,0.50294,0.49511,0.48728,0.47945,0.47162,0.46380,0.45597,0.44814,0.44031,0.43249,0.42466,0.41683,0.40900,0.40117,0.39335,0.38552,0.37769,0.36986,0.36204,0.35421,0.34638,0.33855,0.33072,0.32290,0.31507,0.30724,0.29941,0.29159,0.28376,0.27593,0.26810,0.26027,0.25245,0.24462,0.23679,0.22896,0.22114,0.21331,0.20548,0.19765,0.18982,0.18200,0.17417,0.16634,0.15851,0.15068,0.14286,0.13503,0.12720,0.11937,0.11155,0.10372,0.09589,0.08806,0.08023,0.07241,0.06458,0.05675,0.04892,0.04110,0.03327,0.02544,0.01761,0.00978,0.00196,-0.00587,-0.01370,-0.02153,-0.02935,-0.03718,-0.04501,-0.05284,-0.06067,-0.06849,-0.07632,-0.08415,-0.09198,-0.09980,-0.10763,-0.11546,-0.12329,-0.13112,-0.13894,-0.14677,-0.15460,-0.16243,-0.17025,-0.17808,-0.18591,-0.19374,-0.20157,-0.20939,-0.21722,-0.22505,-0.23288,-0.24070,-0.24853,-0.25636,-0.26419,-0.27202,-0.27984,-0.28767,-0.29550,-0.30333,-0.31115,-0.31898,-0.32681,-0.33464,-0.34247,-0.35029,-0.35812,-0.36595,-0.37378,-0.38160,-0.38943,-0.39726,-0.40509,-0.41292,-0.42074,-0.42857,-0.43640,-0.44423,-0.45205,-0.45988,-0.46771,-0.47554,-0.48337,-0.49119,-0.49902,-0.50685,-0.51468,-0.52250,-0.53033,-0.53816,-0.54599,-0.55382,-0.56164,-0.56947,-0.57730,-0.58513,-0.59295,-0.60078,-0.60861,-0.61644,-0.62427,-0.63209,-0.63992,-0.64775,-0.65558,-0.66341,-0.67123,-0.67906,-0.68689,-0.69472,-0.70254,-0.71037,-0.71820,-0.72603,-0.73386,-0.74168,-0.74951,-0.75734,-0.76517,-0.77299,-0.78082,-0.78865,-0.79648,-0.80431,-0.81213,-0.81996,-0.82779,-0.83562,-0.84344,-0.85127,-0.85910,-0.86693,-0.87476,-0.88258,-0.89041,-0.89824,-0.90607,-0.91389,-0.92172,-0.92955,-0.93738,-0.94521,-0.95303,-0.96086,-0.96869,-0.97652,-0.98434,-0.99217,-1.00000,0};


float squareBuffer[514] = {0.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,0.0,0.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,0.0};


float pulseBuffer[514] = {1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,0.1,0.1,0.1,0.1,0.1,0.1,0.1,0.1,0.1,0.1,0.1,0.1,0.1,0.1,0.1,0.1,0.1,0.1,0.1,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0};



//--------------------------------------------------------------
void ofApp::setup(){
    
    //#ifdef DEBUG
    //
    //#else
    //    ofSetDataPathRoot("../Resources/data");
    //#endif
    
    ofEnableAlphaBlending();
    //    ofEnableDepthTest();
    //    ofSetupScreen();
    ofSetFrameRate(60);
    
    ofBackground(255, 0, 0);


    //    ofDisableArbTex();
    
    //    ofEnablePointSprites();
    
    processScreenWidth = 512;
    processScreenHeight = 512;
    screenWidth = processScreenWidth;
    screenHeight = processScreenHeight;
    
    
    shapesFbo.allocate(processScreenWidth, processScreenHeight, GL_RGBA);
    pointsFbo.allocate(processScreenWidth, processScreenHeight, GL_RGBA);
    linesFbo.allocate(processScreenWidth, processScreenHeight, GL_RGBA);
    boxesFbo.allocate(processScreenWidth, processScreenHeight, GL_RGBA);

    generateShapeFbo();
    generatePointsFbo();
    generateLinesFbo();
    generateBoxesFbo();
    
    
    
    line = 0;
    
    for (int i=0; i<514; i++) {
        sineBuffer[i] = sines[i];
    }
    
    
    for (int i=0; i<INITIAL_BUFFER_SIZE ; i++) {
        outp[i] = 0;
    }
    
    
    for (int i=0; i<BIT ; i++) {
        amp[i] = 0;
        hertzScale[i] = 0;
        phases[i] = 0;
        ampPoints[i] = 0;
        hertzScalePoints[i] = 0;
        phasesPoints[i] = 0;
        ampLines[i] = 0;
        hertzScaleLines[i] = 0;
        phasesLines[i] = 0;
        ampBoxes[i] = 0;
        hertzScaleBoxes[i] = 0;
        phasesBoxes[i] = 0;
    }
    
    maxHertz = 1200;
    spectrum.setup( 1, maxHertz );
    spectrumPoints.setup( 1, maxHertz );
    spectrumLines.setup( 1, maxHertz );
    spectrumBoxes.setup( 1, maxHertz );
    
    

    
    
    vector<ofSoundDevice> _buffDev = soundStream.getDeviceList();
    
    for (int i = 0; i < _buffDev.size(); i++) {
        if (_buffDev.at(i).outputChannels > 0) {
            audioInputDeviceList.push_back(_buffDev.at(i));
        }
    }
    
    ofSoundDevice defaultInputDevice;
    for (int i = 0; i < audioInputDeviceList.size(); i++) {
        if (audioInputDeviceList.at(i).name == "Apple Inc.: Built-in Output") {
            defaultInputDevice = audioInputDeviceList.at(i);
        }
    }
    settings.setOutDevice(defaultInputDevice);

    settings.setOutListener(this);
    settings.bufferSize = INITIAL_BUFFER_SIZE;
    settings.sampleRate = SAMPLE_RATE;
    settings.numInputChannels = 0;
    settings.numOutputChannels = 2;
    soundStream.setup(settings);
    
    
    gui.setup();
    guiSetting();
    
    bGuiView = false;
    
    triggerEnd = false;
    triRotaion = 0;


//    rotaryEncoder.setup();
}






//--------------------------------------------------------------
void ofApp::exit(){
    
}



//--------------------------------------------------------------
void ofApp::update(){

//    rotaryEncoder.update();

    spectrum.speed = speed;
    spectrum.maxHz = maxHz;
    spectrum.minHz = minHz;

    spectrumPoints.speed = speed;
    spectrumPoints.maxHz = maxHz;
    spectrumPoints.minHz = minHz;

    spectrumLines.speed = speed;
    spectrumLines.maxHz = maxHz;
    spectrumLines.minHz = minHz;

    spectrumBoxes.speed = speed;
    spectrumBoxes.maxHz = maxHz;
    spectrumBoxes.minHz = minHz;

    
    line = lineSize;
    
    
    if (spectrum.playing) {
        playerHead.x1 += speed;
        playerHead.x2 += speed;

        playerHeadPoints.x1 += speed;
        playerHeadPoints.x2 += speed;

        playerHeadLines.x1 += speed;
        playerHeadLines.x2 += speed;

        playerHeadBoxes.x1 += speed;
        playerHeadBoxes.x2 += speed;

        
        generateShapeFbo();
        generatePointsFbo();
        generateLinesFbo();
        generateBoxesFbo();

        imageCapture();
        pixelsShapesCapture();
        linesShapesCapture();
        boxesShapesCapture();

        if (playerHead.x1 > processScreenWidth){
            triggerEnd = true;
            playerHead.x1 = 0;
            playerHead.x2 = 0;
            playerHeadPoints.x1 = 0;
            playerHeadPoints.x2 = 0;
            playerHeadLines.x1 = 0;
            playerHeadLines.x2 = 0;
            playerHeadBoxes.x1 = 0;
            playerHeadBoxes.x2 = 0;
        }
    }


    
    
    if (returnZero) {
        playerHead.x1 = 0;
        playerHead.x2 = 0;
        playerHeadPoints.x1 = 0;
        playerHeadPoints.x2 = 0;
        playerHeadLines.x1 = 0;
        playerHeadLines.x2 = 0;
        playerHeadBoxes.x1 = 0;
        playerHeadBoxes.x2 = 0;
    }
    
    
    frameRate = ofToString(ofGetFrameRate(), 1);
    //    shapesFbo.draw(0, 0);
    
}







//--------------------------------------------------------------
void ofApp::draw(){
    

    ofPushMatrix();
    
    float _x = (screenWidth - processScreenWidth) * 0.5;
    float _y = (screenHeight - processScreenHeight) * 0.5;
    //    ofTranslate(_x, _y);

    ofPushMatrix();

    ofBackground(0, 0, 0);
    
    spectrum.update();
    shapesFbo.draw(0, 0);
    
    spectrumPoints.update();
    pointsFbo.draw(514, 0);

    spectrumLines.update();
    linesFbo.draw(514, 514);

    spectrumBoxes.update();
    boxesFbo.draw(0, 514);

    playerHead.drawPlayHead();
    playerHeadPoints.drawPlayHead();
    playerHeadLines.drawPlayHead();
    playerHeadBoxes.drawPlayHead();

    ofPopMatrix();
    
    
    drawVolumeLine();
    
    
    ofPopMatrix();
    
    if (bGuiView) {
        //        ofDisablePointSprites();
        //        ofDisableDepthTest();
        gui.draw();
        
        ofPushStyle();
        for (int i = 0; i < audioInputDeviceList.size(); i++) {
            string _s = audioInputDeviceList[i].name;
            if (i == audioDeviceNum) {
                ofSetColor(255, 0, 0);
            } else {
                ofSetColor(0, 255, 0);
            }
            ofDrawBitmapString(_s, 20, 10 + i * 20);
        }
        ofPopStyle();
    }
    
    
//    ofDrawBitmapString(ofToString(audioDeviceNum), 20, 60);
    
    
    
}





//--------------------------------------------------------------
void ofApp::drawVolumeLine(){
    
    float _levelSize = 120;


    ofPushMatrix();
    ofTranslate(playerHead.x1, 0);
    
    ofPushStyle();
    ofSetColor(0, 255, 0, 255);
    
    if (spectrum.playing) {
        
        vector< pair <float, float> > points = playerHead.getPoints(BIT);

        float line = 8;
        for(int n = 0; n<BIT; n++){
            amp[n] = (amp[n]*line + spectrum.getAmp(points[n].first, points[n].second))/(line+1);
            hertzScale[n] = int(spectrum.getFreq(points[n].second));

            ofDrawLine( 0, n * 1, amp[n] * _levelSize, n * 1 );
            ofDrawLine( 0, n * 1, -amp[n] * _levelSize, n * 1 );
            
        }
        
    }
    
    ofPopStyle();
    ofPopMatrix();

    
    ofPushMatrix();
    ofTranslate(playerHead.x1 + 514, 0);
    
    ofPushStyle();
    ofSetColor(0, 255, 0, 255);
    
    if (spectrum.playing) {
        
        vector< pair <float, float> > pointsPoints = playerHeadPoints.getPoints(BIT);

        float line = 0.2;
        for(int n = 0; n<BIT; n++){
            ampPoints[n] = (ampPoints[n]*line + spectrumPoints.getAmp(pointsPoints[n].first, pointsPoints[n].second))/(line+1) * 0.2;
            hertzScalePoints[n] = int(spectrumPoints.getFreq(pointsPoints[n].second));

            ofDrawLine(0, n * 1, 0 + ampPoints[n] * _levelSize, n * 1 );
            ofDrawLine(0, n * 1, 0 - ampPoints[n] * _levelSize, n * 1 );

        }
        
    }
    
    ofPopStyle();
    ofPopMatrix();
    
    
    ofPushMatrix();
    ofTranslate(playerHead.x1 + 514, 514);
    
    ofPushStyle();
    ofSetColor(0, 255, 0, 255);
    
    if (spectrum.playing) {
        
        vector< pair <float, float> > pointsLines = playerHeadLines.getPoints(BIT);

        float line = 0.4;
        for(int n = 0; n<BIT; n++){
            ampLines[n] = (ampLines[n]*line + spectrumLines.getAmp(pointsLines[n].first, pointsLines[n].second))/(line+1) * 0.3;
            hertzScaleLines[n] = int(spectrumLines.getFreq(pointsLines[n].second));

            ofDrawLine(0, n * 1, 0 + ampLines[n] * _levelSize, n * 1 );
            ofDrawLine(0, n * 1, 0 - ampLines[n] * _levelSize, n * 1 );

        }
        
    }
    
    ofPopStyle();
    ofPopMatrix();

    
    
    ofPushMatrix();
    ofTranslate(playerHead.x1 + 0, 514);
    
    ofPushStyle();
    ofSetColor(0, 255, 0, 255);
    
    if (spectrum.playing) {
        
        vector< pair <float, float> > pointsBoxes = playerHeadBoxes.getPoints(BIT);

        float line = 2.0;
        for(int n = 0; n<BIT; n++){
            ampBoxes[n] = (ampBoxes[n]*line + spectrumBoxes.getAmp(pointsBoxes[n].first, pointsBoxes[n].second))/(line+1) * 0.7;
            hertzScaleBoxes[n] = int(spectrumBoxes.getFreq(pointsBoxes[n].second));

            ofDrawLine(0, n * 1, 0 + ampBoxes[n] * _levelSize, n * 1 );
            ofDrawLine(0, n * 1, 0 - ampBoxes[n] * _levelSize, n * 1 );

        }
        
    }
    
    ofPopStyle();
    ofPopMatrix();
    
}





//--------------------------------------------------------------
ofImage ofApp::imageCapture(){
    
    ofPixels _p;
    
    ofImage _buffImg;
    _buffImg.allocate(processScreenWidth, processScreenHeight, OF_IMAGE_COLOR);

    shapesFbo.readToPixels(_p);

    ofPixels _nonAlpha;
    _nonAlpha.allocate(512, 512, OF_PIXELS_RGB);

    int _index = 0;
    int _index4 = 0;
    for (int i=0; i<512 * 512; i++) {
        _nonAlpha[_index + 0] = _p[_index4 + 0];
        _nonAlpha[_index + 1] = _p[_index4 + 1];
        _nonAlpha[_index + 2] = _p[_index4 + 2];
        _index+=3;
        _index4+=4;
    }

    _buffImg.setFromPixels(_nonAlpha.getData(), 512, 512, OF_IMAGE_COLOR);
    spectrum.loadImageSpectrum(_buffImg);

    
    
    return _nonAlpha;
}


//--------------------------------------------------------------
ofImage ofApp::pixelsShapesCapture(){
    
    ofPixels _p;
    
    ofImage _buffImg;
    _buffImg.allocate(processScreenWidth, processScreenHeight, OF_IMAGE_COLOR);

    pointsFbo.readToPixels(_p);

    ofPixels _nonAlpha;
    _nonAlpha.allocate(512, 512, OF_PIXELS_RGB);

    int _index = 0;
    int _index4 = 0;
    for (int i = 0; i < 512 * 512; i++) {
        _nonAlpha[_index + 0] = _p[_index4 + 0];
        _nonAlpha[_index + 1] = _p[_index4 + 1];
        _nonAlpha[_index + 2] = _p[_index4 + 2];
        _index += 3;
        _index4 += 4;
    }

    _buffImg.setFromPixels(_nonAlpha.getData(), 512, 512, OF_IMAGE_COLOR);
    spectrumPoints.loadImageSpectrum(_buffImg);

    return _nonAlpha;
}



//--------------------------------------------------------------
ofImage ofApp::linesShapesCapture(){
    
    ofPixels _p;
    
    ofImage _buffImg;
    _buffImg.allocate(processScreenWidth, processScreenHeight, OF_IMAGE_COLOR);

    linesFbo.readToPixels(_p);

    ofPixels _nonAlpha;
    _nonAlpha.allocate(512, 512, OF_PIXELS_RGB);

    int _index = 0;
    int _index4 = 0;
    for (int i = 0; i < 512 * 512; i++) {
        _nonAlpha[_index + 0] = _p[_index4 + 0];
        _nonAlpha[_index + 1] = _p[_index4 + 1];
        _nonAlpha[_index + 2] = _p[_index4 + 2];
        _index += 3;
        _index4 += 4;
    }

    _buffImg.setFromPixels(_nonAlpha.getData(), 512, 512, OF_IMAGE_COLOR);
    spectrumLines.loadImageSpectrum(_buffImg);

    return _nonAlpha;
}




//--------------------------------------------------------------
ofImage ofApp::boxesShapesCapture(){
    
    ofPixels _p;
    
    ofImage _buffImg;
    _buffImg.allocate(processScreenWidth, processScreenHeight, OF_IMAGE_COLOR);

    boxesFbo.readToPixels(_p);

    ofPixels _nonAlpha;
    _nonAlpha.allocate(512, 512, OF_PIXELS_RGB);

    int _index = 0;
    int _index4 = 0;
    for (int i = 0; i < 512 * 512; i++) {
        _nonAlpha[_index + 0] = _p[_index4 + 0];
        _nonAlpha[_index + 1] = _p[_index4 + 1];
        _nonAlpha[_index + 2] = _p[_index4 + 2];
        _index += 3;
        _index4 += 4;
    }

    _buffImg.setFromPixels(_nonAlpha.getData(), 512, 512, OF_IMAGE_COLOR);
    spectrumBoxes.loadImageSpectrum(_buffImg);

    return _nonAlpha;
}








//--------------------------------------------------------------
void ofApp::audioReceived(float * input, int bufferSize, int nChannels){
    
}




//--------------------------------------------------------------
void ofApp::audioOut(ofSoundBuffer & buffer){
    
    if(spectrum.playing){
        
        for (int i = 0; i < buffer.getNumFrames(); i++){
            
//            wave = 0.0;
            
            waveShapes = 0;
            wavePoints = 0;
            waveLines = 0;
            waveBoxes = 0;

            
            for(int n=0; n<BIT; n++){
                
                if (amp[n]>0.00001) {
                    phases[n] += 512./(44100.0/(hertzScale[n]));
                    
                    if ( phases[n] >= 511 ) phases[n] -=512;
                    if ( phases[n] < 0 ) phases[n] = 0;
                                        
                    remainder = phases[n] - floor(phases[n]);
                    waveShapes += (float) ((1-remainder) * sineBuffer[1+ (long) phases[n]] + remainder * sineBuffer[2+(long) phases[n]])*amp[n];

                    //                    wave += ( sineBuffer[1 + (long) phases[n]] ) * amp[n];
                    
                }

                if (ampPoints[n]>0.00001) {
                    phasesPoints[n] += 512./(44100.0/(hertzScalePoints[n]));
                    
                    if ( phasesPoints[n] >= 511 ) phasesPoints[n] -=512;
                    if ( phasesPoints[n] < 0 ) phasesPoints[n] = 0;
                                        
                    remainder = phasesPoints[n] - floor(phasesPoints[n]);
                    wavePoints += (float) ((1-remainder) * sineBuffer[1+ (long) phasesPoints[n]] + remainder * sineBuffer[2+(long) phasesPoints[n]])*ampPoints[n];

                    //                    wave += ( sineBuffer[1 + (long) phases[n]] ) * amp[n];
                    
                }

                if (ampLines[n]>0.00001) {
                    phasesLines[n] += 512./(44100.0/(hertzScaleLines[n]));
                    
                    if ( phasesLines[n] >= 511 ) phasesLines[n] -=512;
                    if ( phasesLines[n] < 0 ) phasesLines[n] = 0;
                                        
                    remainder = phasesLines[n] - floor(phasesLines[n]);
                    waveLines += (float) ((1-remainder) * sineBuffer[1+ (long) phasesLines[n]] + remainder * squareBuffer[2+(long) phasesLines[n]])*ampLines[n];

                    //                    wave += ( sineBuffer[1 + (long) phases[n]] ) * amp[n];
                    
                }

                if (ampBoxes[n]>0.00001) {
                    phasesBoxes[n] += 512./(44100.0/(hertzScaleBoxes[n]));
                    
                    if ( phasesBoxes[n] >= 511 ) phasesBoxes[n] -=512;
                    if ( phasesBoxes[n] < 0 ) phasesBoxes[n] = 0;
                                        
                    remainder = phasesBoxes[n] - floor(phasesBoxes[n]);
                    waveBoxes += (float) ((1-remainder) * sineBuffer[1+ (long) phasesBoxes[n]] + remainder * squareBuffer[2+(long) phasesBoxes[n]])*ampBoxes[n];

                    //                    wave += ( sineBuffer[1 + (long) phases[n]] ) * amp[n];
                    
                }

            }
            
            waveShapes /= 20.0;
            if(waveShapes>1.0) waveShapes=1.0;
            if(waveShapes<-1.0) waveShapes=-1.0;

            wavePoints /= 20.0;
            if(wavePoints>1.0) wavePoints=1.0;
            if(wavePoints<-1.0) wavePoints=-1.0;

            waveLines /= 20.0;
            if(waveLines>1.0) waveLines=1.0;
            if(waveLines<-1.0) waveLines=-1.0;

            waveBoxes /= 20.0;
            if(waveBoxes>1.0) waveBoxes=1.0;
            if(waveBoxes<-1.0) waveBoxes=-1.0;


            
            buffer[i * buffer.getNumChannels() + 0] = (waveShapes + wavePoints + waveLines * 0.8 + waveBoxes) * volume;
            buffer[i * buffer.getNumChannels() + 1] = (waveShapes + wavePoints + waveLines * 0.8 + waveBoxes) * volume;
            //            outp[i] = wave;
            
        }
        
        
    } else {
        //        for (int i = 0; i < bufferSize; i++){
        //            output[i*nChannels    ] = 0;
        //            output[i*nChannels + 1] = 0;
        //            outp[i] = 0;
        //        }
    }
    
    
}


//--------------------------------------------------------------
void ofApp::loadCapture(ofImage _img){
    
    spectrum.pause();
    spectrum.loadImageSpectrum(_img);
    
}



//--------------------------------------------------------------
void ofApp::guiSetting(){
    
    gui.setPosition( ofGetWidth() - 230, 10 );
    gui.add(frameRate.setup("FrameRate", " "));
    //    gui.add(modelSelect.setup("Model Select"));
    gui.add(speed.setup("speed", 0.75, 0.0, 10.0) );
    //    gui.add(openf.setup( "Open Picture", false) );
    gui.add(maxHz.setup( "Spectrum Max HZ", 3700, 300.0, 8000.0) );
    gui.add(minHz.setup( "Spectrum Min HZ", 53, 1.0, 200.0) );
    gui.add(lineSize.setup( "LINE", 8, 0.0, 20.0) );
    //    gui.add(reset.setup("Reset!", ""));
    //    gui.add(imageFormat.setup("Image Format Quad/Land", true) );
    //    gui.add(returnZero.setup("Return Zero"));
    //    gui.add(pointView.setup("Point Cloud", true));
    //    gui.add(maxZDepth.setup( "Max zDepth", 1.0, 0.0, 10.0) );
    //    gui.add(minZDepth.setup( "Min zDepth", 0.0, -10.0, 10.0) );
    //    gui.add(zDepthShape.setup("zDepth Shape", false));
    //    gui.add(brightness.setup("PointBright", 120, 0, 255));
    //    gui.add(imageProcessView.setup("ImageProcess", false));
    //    gui.add(errorMath.setup("error", true));
    //    gui.add(errorLength.setup("ErrorLength", 20, 2, 50));
    //    gui.add(fadeLength.setup("FadeLength", 0, 0, 0.1));
    gui.add(volume.setup("Volume", 2, 0, 2));
    
    
    imageProcessView.addListener(this, &ofApp::guiButton);
    errorLength.addListener(this, &ofApp::errorLengthChanged);
    
}




//--------------------------------------------------------------
void ofApp::errorLengthChanged(int & _m){
    
//    imageCapture();
    
}


//--------------------------------------------------------------
void ofApp::guiButton(bool & _b){
    
//    imageCapture();
}




//--------------------------------------------------------------
void ofApp::close() {
    
    spectrum.pause();
    spectrum.stop();
    
}


//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    
}


//--------------------------------------------------------------
void ofApp::keyReleased(int key){
    
    
    switch (key) {
                        
        case ' ':
            imageCapture();
            pixelsShapesCapture();
            linesShapesCapture();
            boxesShapesCapture();
            if (spectrum.playing) {
                spectrum.pause();
                //            ofSoundStreamStop();
                cout << "stop";
            } else {
                spectrum.play();
                //            ofSoundStreamStart();
                cout << "play";
            }
            break;
            
        case 'r':
            playerHead.x1 = ofRandom(514);
            playerHead.x2 = playerHead.x1;
            break;
            
        case 'g':
            bGuiView = !bGuiView;
            break;
            
        case '+':
            rotateDeg += 15;
            break;

        case '-':
            rotateDeg -= 15;
            break;

        case 'a':
            audioDeviceNum += 1;
            audioDeviceNum %= audioInputDeviceList.size();
            break;

            
        default:
            break;
            


    }
    
    ofSoundDevice defaultInputDevice;
    defaultInputDevice = audioInputDeviceList.at(audioDeviceNum);
    settings.setOutDevice(defaultInputDevice);
    settings.setOutListener(this);
    settings.bufferSize = INITIAL_BUFFER_SIZE;
    settings.sampleRate = SAMPLE_RATE;
    settings.numInputChannels = 0;
    settings.numOutputChannels = 2;
    soundStream.setup(settings);

    
}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y){
    
}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){
    
}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){
    
}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){
    
}





//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){
    
    screenWidth = (float)w;
    screenHeight = (float)h;
    
}



//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo info) {
    
}




//--------------------------------------------------------------
void ofApp::generateShapeFbo(){
    
    shapesFbo.begin();
    
    ofClear(0, 0);
    
    shapeDraw(3, 200, rotateDeg);
    shapeDraw(4, 250, rotateDeg);
    shapeDraw(5, 100, rotateDeg);

    shapesFbo.end();
    
}


//--------------------------------------------------------------
void ofApp::generatePointsFbo(){
    
    pointsFbo.begin();
    
    ofClear(0, 0);
    
    dotDraw();

    pointsFbo.end();
    
}



//--------------------------------------------------------------
void ofApp::generateLinesFbo(){
    
    linesFbo.begin();
    
    ofClear(0, 0);
    
    lineDraw();

    linesFbo.end();
    
}



//--------------------------------------------------------------
void ofApp::generateBoxesFbo(){
    
    boxesFbo.begin();
    
    ofClear(0, 0);
    
    boxDraw();

    boxesFbo.end();
    
}




//--------------------------------------------------------------
void ofApp::dotDraw(){

    ofPushStyle();

    ofSetColor(255, 220);

    for (int i = 0; i < 512; i += 7) {
        for (int j = 0; j < 12; j++) {
            ofPushMatrix();
            ofTranslate(i, ofRandom(j * 40 + 10, j * 40 + 40) );
            ofDrawRectangle( 0, 0, 2, 2 );
            ofPopMatrix();
        }
    }

    ofPopStyle();
}



//--------------------------------------------------------------
void ofApp::shapeDraw(int numShape, int size, int rotation){

    if(triggerEnd) {
        triRotaion += 45;
        triggerEnd = false;
    }

    ofPushMatrix();

    ofPushStyle();
    ofNoFill();
    ofSetColor(255);
    ofSetLineWidth(2);

    ofTranslate(ofGetWidth() * 0.25, ofGetHeight() * 0.25);
    ofRotateZDeg(rotation);

    ofBeginShape();

    int _numShape = numShape;
    for (int i=0; i<_numShape; i++) {
        int _size = size;
        float _x = sin( ofDegToRad(i * 360 / _numShape) ) * _size;
        float _y = cos( ofDegToRad(i * 360 / _numShape) ) * _size;
        ofVertex(_x, _y);
    }

    ofEndShape(true);


    ofPopStyle();
    ofPopMatrix();

}


//--------------------------------------------------------------
void ofApp::lineDraw(){

    for (int i=0; i<3; i++) {
        ofSetColor(255, 180);
        ofDrawLine( 0, ofRandom(processScreenHeight), processScreenWidth, ofRandom(processScreenHeight) );
    }

    for (int i=0; i<3; i++) {
        ofSetColor(255, 180);
        ofDrawLine( 0, ofRandom(processScreenHeight), processScreenWidth, ofRandom(processScreenHeight) );
    }


    float _num = 3;
    for (int j = 0; j < 3; j++) {
        float _ratio = ofRandom(0.08, 0.3);
        float _startY = ofRandom(processScreenHeight);
        int _startNoise = ofRandom(10000);
        ofPushStyle();
        ofSetColor(255, 180);
        for (int i = 0; i < _num; i+=1) {
            float _x1 = i * processScreenWidth / _num;
            float _x2 = (i + 1) * processScreenWidth / _num;
            float _y1 = ofNoise((i + _startNoise) * _ratio) * 100 + _startY;
            float _y2 = ofNoise((i + _startNoise + 1) * _ratio) * 100 + _startY;
            ofDrawLine( _x1, _y1, _x2, _y2 );
        }
        ofPopStyle();
    }

}


//--------------------------------------------------------------
void ofApp::boxDraw(){

    for (int i=0; i<150; i++) {

        ofPushStyle();
        ofNoFill();

        ofPushMatrix();
        ofTranslate(i * 10, processScreenHeight - 420 );
        ofSetColor(ofRandom(0, 255));
        ofDrawRectangle( 0, 0, ofRandom(30, 50), ofRandom(10, 40) );
        ofPopMatrix();

        ofPushMatrix();
        ofTranslate(i * 15, processScreenHeight - 280 );
        ofSetColor(ofRandom(0, 255));
        ofDrawRectangle( 0, 0, ofRandom(30, 50), ofRandom(10, 40) );
        ofPopMatrix();

        ofPushMatrix();
        ofTranslate(i * 20, processScreenHeight - 160 );
        ofSetColor(ofRandom(120, 255));
        ofDrawRectangle( 0, 0, ofRandom(10, 10), ofRandom(10, 60) );
        ofPopMatrix();

        ofPopStyle();
    }

}






