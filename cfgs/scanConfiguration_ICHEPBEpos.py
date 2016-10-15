
leptons = "mumu"
systematics = ["sigEff","bkgUncert","massScale"]
#systematics = ["massScale"]
masses = [[5,400,1000], [10,1000,2000], [20,2000,4500]]
cardDir = "dataCards_ICHEPBEpos"

libraries = ["ZPrimeMuonBkgPdf_cxx.so","Pol2_cxx.so"]

channels = ["dimuon_BEpos"]
numInt = 100000
numToys = 1
exptToys = 100
width = 0.006
submitTo = "Purdue"
		