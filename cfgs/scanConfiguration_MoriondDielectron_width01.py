
leptons = "elel"
systematics = ["bkgUncert","massScale","sigEff","res"]
correlate = False
#systematics = ["massScale","sigEff"]
masses = [[5,200,1000], [10,1000,2000], [20,2000,5500]]
massesExp = [[100,200,600,1000,1,500000], [100,600,1000,500,2,500000], [250,1000,2000,100,10,50000], [250,2000,5600,100,10,500000]]
#massesExp = [[250,2000,4600,500,2,1000000]]


libraries = ["ZPrimeBkgPdf_cxx.so","PowFunc_cxx.so","RooCruijff_cxx.so"]

#channels = ["dimuon_BB","dimuon_BEpos","dimuon_BEneg"]
channels = ["dielectron_Moriond2017_EBEB","dielectron_Moriond2017_EBEE"]
numInt = 500000
numToys = 10
exptToys = 500
width = 0.01
submitTo = "Purdue"

binWidth = 10
CB = True
signalInjection = {"mass":750,"width":0.1000,"nEvents":100,"CB":True}
		
