// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 949 bytes in 1 exact ranges.
// Source symbol alias: FUN_588f7580.

// Ghidra body range 0x588F7580..0x588F7935; 949 mapped bytes.
extern "C" __declspec(naked) void FUN_588f7580_segment_00() {
    __asm {
        // 0x588F7580: sub esp, 0x104
        __asm _emit 0x81
        __asm _emit 0xEC
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F7586: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x588F758B: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x588F758D: mov dword ptr [esp + 0x100], eax
        __asm _emit 0x89
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F7594: mov eax, dword ptr [0x58a245f0]
        __asm _emit 0xA1
        __asm _emit 0xF0
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588F7599: push esi
        __asm _emit 0x56
        // 0x588F759A: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x588F759C: mov dword ptr [esi + 4], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x04
        // 0x588F759F: mov eax, dword ptr [esp + 0x10c]
        __asm _emit 0x8B
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x0C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F75A6: cmp eax, 0x18
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x18
        // 0x588F75A9: ja 0x588f7901
        __asm _emit 0x0F
        __asm _emit 0x87
        __asm _emit 0x52
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F75AF: jmp dword ptr [eax*4 + 0x588f7938]
        __asm _emit 0xFF
        __asm _emit 0x24
        __asm _emit 0x85
        __asm _emit 0x38
        __asm _emit 0x79
        __asm _emit 0x8F
        __asm _emit 0x58
        // 0x588F75B6: push 0x589a207c
        __asm _emit 0x68
        __asm _emit 0x7C
        __asm _emit 0x20
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x588F75BB: call 0x588f7230
        __asm _emit 0xE8
        __asm _emit 0x70
        __asm _emit 0xFC
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588F75C0: pop esi
        __asm _emit 0x5E
        // 0x588F75C1: mov ecx, dword ptr [esp + 0x100]
        __asm _emit 0x8B
        __asm _emit 0x8C
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F75C8: xor ecx, esp
        __asm _emit 0x33
        __asm _emit 0xCC
        // 0x588F75CA: call 0x5897cbda
        __asm _emit 0xE8
        __asm _emit 0x0B
        __asm _emit 0x56
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x588F75CF: add esp, 0x104
        __asm _emit 0x81
        __asm _emit 0xC4
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F75D5: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x588F75D8: push 0x589a204c
        __asm _emit 0x68
        __asm _emit 0x4C
        __asm _emit 0x20
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x588F75DD: call 0x588f7230
        __asm _emit 0xE8
        __asm _emit 0x4E
        __asm _emit 0xFC
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588F75E2: pop esi
        __asm _emit 0x5E
        // 0x588F75E3: mov ecx, dword ptr [esp + 0x100]
        __asm _emit 0x8B
        __asm _emit 0x8C
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F75EA: xor ecx, esp
        __asm _emit 0x33
        __asm _emit 0xCC
        // 0x588F75EC: call 0x5897cbda
        __asm _emit 0xE8
        __asm _emit 0xE9
        __asm _emit 0x55
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x588F75F1: add esp, 0x104
        __asm _emit 0x81
        __asm _emit 0xC4
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F75F7: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x588F75FA: push 0x589a2014
        __asm _emit 0x68
        __asm _emit 0x14
        __asm _emit 0x20
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x588F75FF: call 0x588f7230
        __asm _emit 0xE8
        __asm _emit 0x2C
        __asm _emit 0xFC
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588F7604: pop esi
        __asm _emit 0x5E
        // 0x588F7605: mov ecx, dword ptr [esp + 0x100]
        __asm _emit 0x8B
        __asm _emit 0x8C
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F760C: xor ecx, esp
        __asm _emit 0x33
        __asm _emit 0xCC
        // 0x588F760E: call 0x5897cbda
        __asm _emit 0xE8
        __asm _emit 0xC7
        __asm _emit 0x55
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x588F7613: add esp, 0x104
        __asm _emit 0x81
        __asm _emit 0xC4
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F7619: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x588F761C: push 0x589a1fec
        __asm _emit 0x68
        __asm _emit 0xEC
        __asm _emit 0x1F
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x588F7621: call 0x588f7230
        __asm _emit 0xE8
        __asm _emit 0x0A
        __asm _emit 0xFC
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588F7626: pop esi
        __asm _emit 0x5E
        // 0x588F7627: mov ecx, dword ptr [esp + 0x100]
        __asm _emit 0x8B
        __asm _emit 0x8C
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F762E: xor ecx, esp
        __asm _emit 0x33
        __asm _emit 0xCC
        // 0x588F7630: call 0x5897cbda
        __asm _emit 0xE8
        __asm _emit 0xA5
        __asm _emit 0x55
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x588F7635: add esp, 0x104
        __asm _emit 0x81
        __asm _emit 0xC4
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F763B: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x588F763E: push 0xff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F7643: lea ecx, [esp + 9]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x09
        // 0x588F7647: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588F7649: push ecx
        __asm _emit 0x51
        // 0x588F764A: mov byte ptr [esp + 0x10], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        __asm _emit 0x00
        // 0x588F764F: call 0x5897cc48
        __asm _emit 0xE8
        __asm _emit 0xF4
        __asm _emit 0x55
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x588F7654: push 5
        __asm _emit 0x6A
        __asm _emit 0x05
        // 0x588F7656: push 0x589a1f90
        __asm _emit 0x68
        __asm _emit 0x90
        __asm _emit 0x1F
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x588F765B: lea edx, [esp + 0x18]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x588F765F: push 0x100
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F7664: push edx
        __asm _emit 0x52
        // 0x588F7665: call 0x5874ba60
        __asm _emit 0xE8
        __asm _emit 0xF6
        __asm _emit 0x43
        __asm _emit 0xE5
        __asm _emit 0xFF
        // 0x588F766A: add esp, 0x1c
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x1C
        // 0x588F766D: lea eax, [esp + 4]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x588F7671: push eax
        __asm _emit 0x50
        // 0x588F7672: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x588F7674: call 0x588f7230
        __asm _emit 0xE8
        __asm _emit 0xB7
        __asm _emit 0xFB
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588F7679: pop esi
        __asm _emit 0x5E
        // 0x588F767A: mov ecx, dword ptr [esp + 0x100]
        __asm _emit 0x8B
        __asm _emit 0x8C
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F7681: xor ecx, esp
        __asm _emit 0x33
        __asm _emit 0xCC
        // 0x588F7683: call 0x5897cbda
        __asm _emit 0xE8
        __asm _emit 0x52
        __asm _emit 0x55
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x588F7688: add esp, 0x104
        __asm _emit 0x81
        __asm _emit 0xC4
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F768E: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x588F7691: push 0x589a1f68
        __asm _emit 0x68
        __asm _emit 0x68
        __asm _emit 0x1F
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x588F7696: call 0x588f7230
        __asm _emit 0xE8
        __asm _emit 0x95
        __asm _emit 0xFB
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588F769B: pop esi
        __asm _emit 0x5E
        // 0x588F769C: mov ecx, dword ptr [esp + 0x100]
        __asm _emit 0x8B
        __asm _emit 0x8C
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F76A3: xor ecx, esp
        __asm _emit 0x33
        __asm _emit 0xCC
        // 0x588F76A5: call 0x5897cbda
        __asm _emit 0xE8
        __asm _emit 0x30
        __asm _emit 0x55
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x588F76AA: add esp, 0x104
        __asm _emit 0x81
        __asm _emit 0xC4
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F76B0: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x588F76B3: push 0x589a1f30
        __asm _emit 0x68
        __asm _emit 0x30
        __asm _emit 0x1F
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x588F76B8: call dword ptr [0x5898c030]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xC0
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x588F76BE: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x588F76C1: push eax
        __asm _emit 0x50
        // 0x588F76C2: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x588F76C4: call 0x588f7230
        __asm _emit 0xE8
        __asm _emit 0x67
        __asm _emit 0xFB
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588F76C9: pop esi
        __asm _emit 0x5E
        // 0x588F76CA: mov ecx, dword ptr [esp + 0x100]
        __asm _emit 0x8B
        __asm _emit 0x8C
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F76D1: xor ecx, esp
        __asm _emit 0x33
        __asm _emit 0xCC
        // 0x588F76D3: call 0x5897cbda
        __asm _emit 0xE8
        __asm _emit 0x02
        __asm _emit 0x55
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x588F76D8: add esp, 0x104
        __asm _emit 0x81
        __asm _emit 0xC4
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F76DE: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x588F76E1: push 0x589a1f18
        __asm _emit 0x68
        __asm _emit 0x18
        __asm _emit 0x1F
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x588F76E6: call 0x588f7230
        __asm _emit 0xE8
        __asm _emit 0x45
        __asm _emit 0xFB
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588F76EB: pop esi
        __asm _emit 0x5E
        // 0x588F76EC: mov ecx, dword ptr [esp + 0x100]
        __asm _emit 0x8B
        __asm _emit 0x8C
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F76F3: xor ecx, esp
        __asm _emit 0x33
        __asm _emit 0xCC
        // 0x588F76F5: call 0x5897cbda
        __asm _emit 0xE8
        __asm _emit 0xE0
        __asm _emit 0x54
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x588F76FA: add esp, 0x104
        __asm _emit 0x81
        __asm _emit 0xC4
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F7700: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x588F7703: push 0x589a1ef0
        __asm _emit 0x68
        __asm _emit 0xF0
        __asm _emit 0x1E
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x588F7708: call 0x588f7230
        __asm _emit 0xE8
        __asm _emit 0x23
        __asm _emit 0xFB
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588F770D: pop esi
        __asm _emit 0x5E
        // 0x588F770E: mov ecx, dword ptr [esp + 0x100]
        __asm _emit 0x8B
        __asm _emit 0x8C
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F7715: xor ecx, esp
        __asm _emit 0x33
        __asm _emit 0xCC
        // 0x588F7717: call 0x5897cbda
        __asm _emit 0xE8
        __asm _emit 0xBE
        __asm _emit 0x54
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x588F771C: add esp, 0x104
        __asm _emit 0x81
        __asm _emit 0xC4
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F7722: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x588F7725: push 0x589a1ea0
        __asm _emit 0x68
        __asm _emit 0xA0
        __asm _emit 0x1E
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x588F772A: call 0x588f7230
        __asm _emit 0xE8
        __asm _emit 0x01
        __asm _emit 0xFB
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588F772F: pop esi
        __asm _emit 0x5E
        // 0x588F7730: mov ecx, dword ptr [esp + 0x100]
        __asm _emit 0x8B
        __asm _emit 0x8C
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F7737: xor ecx, esp
        __asm _emit 0x33
        __asm _emit 0xCC
        // 0x588F7739: call 0x5897cbda
        __asm _emit 0xE8
        __asm _emit 0x9C
        __asm _emit 0x54
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x588F773E: add esp, 0x104
        __asm _emit 0x81
        __asm _emit 0xC4
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F7744: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x588F7747: push 0x589a1e74
        __asm _emit 0x68
        __asm _emit 0x74
        __asm _emit 0x1E
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x588F774C: call 0x588f7230
        __asm _emit 0xE8
        __asm _emit 0xDF
        __asm _emit 0xFA
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588F7751: pop esi
        __asm _emit 0x5E
        // 0x588F7752: mov ecx, dword ptr [esp + 0x100]
        __asm _emit 0x8B
        __asm _emit 0x8C
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F7759: xor ecx, esp
        __asm _emit 0x33
        __asm _emit 0xCC
        // 0x588F775B: call 0x5897cbda
        __asm _emit 0xE8
        __asm _emit 0x7A
        __asm _emit 0x54
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x588F7760: add esp, 0x104
        __asm _emit 0x81
        __asm _emit 0xC4
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F7766: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x588F7769: push 0x589a1e58
        __asm _emit 0x68
        __asm _emit 0x58
        __asm _emit 0x1E
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x588F776E: call 0x588f7230
        __asm _emit 0xE8
        __asm _emit 0xBD
        __asm _emit 0xFA
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588F7773: pop esi
        __asm _emit 0x5E
        // 0x588F7774: mov ecx, dword ptr [esp + 0x100]
        __asm _emit 0x8B
        __asm _emit 0x8C
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F777B: xor ecx, esp
        __asm _emit 0x33
        __asm _emit 0xCC
        // 0x588F777D: call 0x5897cbda
        __asm _emit 0xE8
        __asm _emit 0x58
        __asm _emit 0x54
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x588F7782: add esp, 0x104
        __asm _emit 0x81
        __asm _emit 0xC4
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F7788: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x588F778B: push 0x589a1e40
        __asm _emit 0x68
        __asm _emit 0x40
        __asm _emit 0x1E
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x588F7790: call 0x588f7230
        __asm _emit 0xE8
        __asm _emit 0x9B
        __asm _emit 0xFA
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588F7795: pop esi
        __asm _emit 0x5E
        // 0x588F7796: mov ecx, dword ptr [esp + 0x100]
        __asm _emit 0x8B
        __asm _emit 0x8C
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F779D: xor ecx, esp
        __asm _emit 0x33
        __asm _emit 0xCC
        // 0x588F779F: call 0x5897cbda
        __asm _emit 0xE8
        __asm _emit 0x36
        __asm _emit 0x54
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x588F77A4: add esp, 0x104
        __asm _emit 0x81
        __asm _emit 0xC4
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F77AA: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x588F77AD: push 0x589a1e28
        __asm _emit 0x68
        __asm _emit 0x28
        __asm _emit 0x1E
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x588F77B2: call 0x588f7230
        __asm _emit 0xE8
        __asm _emit 0x79
        __asm _emit 0xFA
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588F77B7: pop esi
        __asm _emit 0x5E
        // 0x588F77B8: mov ecx, dword ptr [esp + 0x100]
        __asm _emit 0x8B
        __asm _emit 0x8C
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F77BF: xor ecx, esp
        __asm _emit 0x33
        __asm _emit 0xCC
        // 0x588F77C1: call 0x5897cbda
        __asm _emit 0xE8
        __asm _emit 0x14
        __asm _emit 0x54
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x588F77C6: add esp, 0x104
        __asm _emit 0x81
        __asm _emit 0xC4
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F77CC: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x588F77CF: push 0x589a1e18
        __asm _emit 0x68
        __asm _emit 0x18
        __asm _emit 0x1E
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x588F77D4: call 0x588f7230
        __asm _emit 0xE8
        __asm _emit 0x57
        __asm _emit 0xFA
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588F77D9: pop esi
        __asm _emit 0x5E
        // 0x588F77DA: mov ecx, dword ptr [esp + 0x100]
        __asm _emit 0x8B
        __asm _emit 0x8C
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F77E1: xor ecx, esp
        __asm _emit 0x33
        __asm _emit 0xCC
        // 0x588F77E3: call 0x5897cbda
        __asm _emit 0xE8
        __asm _emit 0xF2
        __asm _emit 0x53
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x588F77E8: add esp, 0x104
        __asm _emit 0x81
        __asm _emit 0xC4
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F77EE: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x588F77F1: push 0x589a1e04
        __asm _emit 0x68
        __asm _emit 0x04
        __asm _emit 0x1E
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x588F77F6: call 0x588f7230
        __asm _emit 0xE8
        __asm _emit 0x35
        __asm _emit 0xFA
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588F77FB: pop esi
        __asm _emit 0x5E
        // 0x588F77FC: mov ecx, dword ptr [esp + 0x100]
        __asm _emit 0x8B
        __asm _emit 0x8C
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F7803: xor ecx, esp
        __asm _emit 0x33
        __asm _emit 0xCC
        // 0x588F7805: call 0x5897cbda
        __asm _emit 0xE8
        __asm _emit 0xD0
        __asm _emit 0x53
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x588F780A: add esp, 0x104
        __asm _emit 0x81
        __asm _emit 0xC4
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F7810: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x588F7813: push 0x589a1df0
        __asm _emit 0x68
        __asm _emit 0xF0
        __asm _emit 0x1D
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x588F7818: call 0x588f7230
        __asm _emit 0xE8
        __asm _emit 0x13
        __asm _emit 0xFA
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588F781D: pop esi
        __asm _emit 0x5E
        // 0x588F781E: mov ecx, dword ptr [esp + 0x100]
        __asm _emit 0x8B
        __asm _emit 0x8C
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F7825: xor ecx, esp
        __asm _emit 0x33
        __asm _emit 0xCC
        // 0x588F7827: call 0x5897cbda
        __asm _emit 0xE8
        __asm _emit 0xAE
        __asm _emit 0x53
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x588F782C: add esp, 0x104
        __asm _emit 0x81
        __asm _emit 0xC4
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F7832: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x588F7835: push 0x589a1dd8
        __asm _emit 0x68
        __asm _emit 0xD8
        __asm _emit 0x1D
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x588F783A: call 0x588f7230
        __asm _emit 0xE8
        __asm _emit 0xF1
        __asm _emit 0xF9
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588F783F: pop esi
        __asm _emit 0x5E
        // 0x588F7840: mov ecx, dword ptr [esp + 0x100]
        __asm _emit 0x8B
        __asm _emit 0x8C
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F7847: xor ecx, esp
        __asm _emit 0x33
        __asm _emit 0xCC
        // 0x588F7849: call 0x5897cbda
        __asm _emit 0xE8
        __asm _emit 0x8C
        __asm _emit 0x53
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x588F784E: add esp, 0x104
        __asm _emit 0x81
        __asm _emit 0xC4
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F7854: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x588F7857: push 0x589a1db8
        __asm _emit 0x68
        __asm _emit 0xB8
        __asm _emit 0x1D
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x588F785C: call 0x588f7230
        __asm _emit 0xE8
        __asm _emit 0xCF
        __asm _emit 0xF9
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588F7861: pop esi
        __asm _emit 0x5E
        // 0x588F7862: mov ecx, dword ptr [esp + 0x100]
        __asm _emit 0x8B
        __asm _emit 0x8C
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F7869: xor ecx, esp
        __asm _emit 0x33
        __asm _emit 0xCC
        // 0x588F786B: call 0x5897cbda
        __asm _emit 0xE8
        __asm _emit 0x6A
        __asm _emit 0x53
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x588F7870: add esp, 0x104
        __asm _emit 0x81
        __asm _emit 0xC4
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F7876: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x588F7879: push 0x589a1da0
        __asm _emit 0x68
        __asm _emit 0xA0
        __asm _emit 0x1D
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x588F787E: call 0x588f7230
        __asm _emit 0xE8
        __asm _emit 0xAD
        __asm _emit 0xF9
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588F7883: pop esi
        __asm _emit 0x5E
        // 0x588F7884: mov ecx, dword ptr [esp + 0x100]
        __asm _emit 0x8B
        __asm _emit 0x8C
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F788B: xor ecx, esp
        __asm _emit 0x33
        __asm _emit 0xCC
        // 0x588F788D: call 0x5897cbda
        __asm _emit 0xE8
        __asm _emit 0x48
        __asm _emit 0x53
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x588F7892: add esp, 0x104
        __asm _emit 0x81
        __asm _emit 0xC4
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F7898: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x588F789B: push 0x589a1d88
        __asm _emit 0x68
        __asm _emit 0x88
        __asm _emit 0x1D
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x588F78A0: call 0x588f7230
        __asm _emit 0xE8
        __asm _emit 0x8B
        __asm _emit 0xF9
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588F78A5: pop esi
        __asm _emit 0x5E
        // 0x588F78A6: mov ecx, dword ptr [esp + 0x100]
        __asm _emit 0x8B
        __asm _emit 0x8C
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F78AD: xor ecx, esp
        __asm _emit 0x33
        __asm _emit 0xCC
        // 0x588F78AF: call 0x5897cbda
        __asm _emit 0xE8
        __asm _emit 0x26
        __asm _emit 0x53
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x588F78B4: add esp, 0x104
        __asm _emit 0x81
        __asm _emit 0xC4
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F78BA: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x588F78BD: push 0x589a1b20
        __asm _emit 0x68
        __asm _emit 0x20
        __asm _emit 0x1B
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x588F78C2: call 0x588f7230
        __asm _emit 0xE8
        __asm _emit 0x69
        __asm _emit 0xF9
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588F78C7: pop esi
        __asm _emit 0x5E
        // 0x588F78C8: mov ecx, dword ptr [esp + 0x100]
        __asm _emit 0x8B
        __asm _emit 0x8C
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F78CF: xor ecx, esp
        __asm _emit 0x33
        __asm _emit 0xCC
        // 0x588F78D1: call 0x5897cbda
        __asm _emit 0xE8
        __asm _emit 0x04
        __asm _emit 0x53
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x588F78D6: add esp, 0x104
        __asm _emit 0x81
        __asm _emit 0xC4
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F78DC: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x588F78DF: push 0x589a1ad0
        __asm _emit 0x68
        __asm _emit 0xD0
        __asm _emit 0x1A
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x588F78E4: call 0x588f7230
        __asm _emit 0xE8
        __asm _emit 0x47
        __asm _emit 0xF9
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588F78E9: pop esi
        __asm _emit 0x5E
        // 0x588F78EA: mov ecx, dword ptr [esp + 0x100]
        __asm _emit 0x8B
        __asm _emit 0x8C
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F78F1: xor ecx, esp
        __asm _emit 0x33
        __asm _emit 0xCC
        // 0x588F78F3: call 0x5897cbda
        __asm _emit 0xE8
        __asm _emit 0xE2
        __asm _emit 0x52
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x588F78F8: add esp, 0x104
        __asm _emit 0x81
        __asm _emit 0xC4
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F78FE: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x588F7901: mov ecx, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x04
        // 0x588F7904: push ecx
        __asm _emit 0x51
        // 0x588F7905: push 0x23
        __asm _emit 0x6A
        __asm _emit 0x23
        // 0x588F7907: push 0x589a1a18
        __asm _emit 0x68
        __asm _emit 0x18
        __asm _emit 0x1A
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x588F790C: push 0x2711
        __asm _emit 0x68
        __asm _emit 0x11
        __asm _emit 0x27
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F7911: call 0x5876baf0
        __asm _emit 0xE8
        __asm _emit 0xDA
        __asm _emit 0x41
        __asm _emit 0xE7
        __asm _emit 0xFF
        // 0x588F7916: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588F7918: call 0x58764d30
        __asm _emit 0xE8
        __asm _emit 0x13
        __asm _emit 0xD4
        __asm _emit 0xE6
        __asm _emit 0xFF
        // 0x588F791D: mov ecx, dword ptr [esp + 0x104]
        __asm _emit 0x8B
        __asm _emit 0x8C
        __asm _emit 0x24
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F7924: pop esi
        __asm _emit 0x5E
        // 0x588F7925: xor ecx, esp
        __asm _emit 0x33
        __asm _emit 0xCC
        // 0x588F7927: call 0x5897cbda
        __asm _emit 0xE8
        __asm _emit 0xAE
        __asm _emit 0x52
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x588F792C: add esp, 0x104
        __asm _emit 0x81
        __asm _emit 0xC4
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F7932: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
