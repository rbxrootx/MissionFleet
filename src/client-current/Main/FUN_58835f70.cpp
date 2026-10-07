// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 2430 bytes in 2 discontiguous ranges.
// Source symbol alias: FUN_58835f70.

// Ghidra body range 0x58835F70..0x588364FA; 1418 mapped bytes.
extern "C" __declspec(naked) void FUN_58835f70_segment_00() {
    __asm {
        // 0x58835F70: sub esp, 0x11c
        __asm _emit 0x81
        __asm _emit 0xEC
        __asm _emit 0x1C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58835F76: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x58835F7B: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x58835F7D: mov dword ptr [esp + 0x118], eax
        __asm _emit 0x89
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x18
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58835F84: mov eax, dword ptr [esp + 0x124]
        __asm _emit 0x8B
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58835F8B: push ebx
        __asm _emit 0x53
        // 0x58835F8C: push ebp
        __asm _emit 0x55
        // 0x58835F8D: push esi
        __asm _emit 0x56
        // 0x58835F8E: mov ebx, 2
        __asm _emit 0xBB
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58835F93: push edi
        __asm _emit 0x57
        // 0x58835F94: mov edi, dword ptr [esp + 0x138]
        __asm _emit 0x8B
        __asm _emit 0xBC
        __asm _emit 0x24
        __asm _emit 0x38
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58835F9B: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x58835F9D: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x58835F9F: jne 0x58836473
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xCE
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58835FA5: mov eax, dword ptr [esp + 0x130]
        __asm _emit 0x8B
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x30
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58835FAC: lea ebp, [ebx + 4]
        __asm _emit 0x8D
        __asm _emit 0x6B
        __asm _emit 0x04
        // 0x58835FAF: cmp eax, dword ptr [esi + 0xb8]
        __asm _emit 0x3B
        __asm _emit 0x86
        __asm _emit 0xB8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58835FB5: jne 0x58836056
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x9B
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58835FBB: call 0x587b6c60
        __asm _emit 0xE8
        __asm _emit 0xA0
        __asm _emit 0x0C
        __asm _emit 0xF8
        __asm _emit 0xFF
        // 0x58835FC0: mov eax, dword ptr [esi + 0xb4]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xB4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58835FC6: mov ecx, 0xfffd
        __asm _emit 0xB9
        __asm _emit 0xFD
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58835FCB: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x58835FCF: mov eax, dword ptr [esi + 0xb8]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xB8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58835FD5: mov edx, ecx
        __asm _emit 0x8B
        __asm _emit 0xD1
        // 0x58835FD7: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x58835FDB: mov eax, dword ptr [esi + 0x20c]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x0C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58835FE1: or word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x58
        __asm _emit 0x24
        // 0x58835FE5: mov eax, dword ptr [esi + 0x210]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x10
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58835FEB: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x58835FEF: mov eax, dword ptr [esi + 0xe4]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xE4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58835FF5: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x58835FF9: mov eax, dword ptr [esi + 0xe0]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xE0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58835FFF: cmp word ptr [0x58a0b4a8], bp
        __asm _emit 0x66
        __asm _emit 0x39
        __asm _emit 0x2D
        __asm _emit 0xA8
        __asm _emit 0xB4
        __asm _emit 0xA0
        __asm _emit 0x58
        // 0x58836006: jne 0x5883602f
        __asm _emit 0x75
        __asm _emit 0x27
        // 0x58836008: or word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x58
        __asm _emit 0x24
        // 0x5883600C: mov eax, dword ptr [esi + 0x294]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x94
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58836012: or word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x58
        __asm _emit 0x24
        // 0x58836016: mov eax, dword ptr [esi + 0x298]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x98
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883601C: or word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x58
        __asm _emit 0x24
        // 0x58836020: mov eax, dword ptr [esi + 0x29c]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x9C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58836026: or word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x58
        __asm _emit 0x24
        // 0x5883602A: jmp 0x5883641d
        __asm _emit 0xE9
        __asm _emit 0xEE
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883602F: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x58836033: mov eax, dword ptr [esi + 0x294]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x94
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58836039: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x5883603D: mov eax, dword ptr [esi + 0x298]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x98
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58836043: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x58836047: mov eax, dword ptr [esi + 0x29c]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x9C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883604D: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x58836051: jmp 0x5883641d
        __asm _emit 0xE9
        __asm _emit 0xC7
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58836056: cmp eax, dword ptr [esi + 0x20c]
        __asm _emit 0x3B
        __asm _emit 0x86
        __asm _emit 0x0C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883605C: jne 0x588360bf
        __asm _emit 0x75
        __asm _emit 0x61
        // 0x5883605E: call 0x587b6be0
        __asm _emit 0xE8
        __asm _emit 0x7D
        __asm _emit 0x0B
        __asm _emit 0xF8
        __asm _emit 0xFF
        // 0x58836063: mov eax, dword ptr [esi + 0xb4]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xB4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58836069: mov ecx, 0xfffd
        __asm _emit 0xB9
        __asm _emit 0xFD
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883606E: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x58836072: mov eax, dword ptr [esi + 0xb8]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xB8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58836078: or word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x58
        __asm _emit 0x24
        // 0x5883607C: mov eax, dword ptr [esi + 0x20c]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x0C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58836082: mov edx, ecx
        __asm _emit 0x8B
        __asm _emit 0xD1
        // 0x58836084: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x58836088: mov eax, dword ptr [esi + 0x210]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x10
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883608E: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x58836092: mov eax, dword ptr [esi + 0xe4]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xE4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58836098: or word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x58
        __asm _emit 0x24
        // 0x5883609C: mov eax, dword ptr [esi + 0x294]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x94
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588360A2: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x588360A6: mov eax, dword ptr [esi + 0x298]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x98
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588360AC: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x588360B0: mov eax, dword ptr [esi + 0x29c]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x9C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588360B6: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x588360BA: jmp 0x5883641d
        __asm _emit 0xE9
        __asm _emit 0x5E
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588360BF: cmp eax, dword ptr [esi + 0xe4]
        __asm _emit 0x3B
        __asm _emit 0x86
        __asm _emit 0xE4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588360C5: jne 0x588360de
        __asm _emit 0x75
        __asm _emit 0x17
        // 0x588360C7: mov ecx, dword ptr [esi + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x30
        // 0x588360CA: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x588360CC: mov edx, dword ptr [eax + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x18
        // 0x588360CF: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588360D1: push 0xf232
        __asm _emit 0x68
        __asm _emit 0x32
        __asm _emit 0xF2
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588360D6: push esi
        __asm _emit 0x56
        // 0x588360D7: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x588360D9: jmp 0x5883641d
        __asm _emit 0xE9
        __asm _emit 0x3F
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588360DE: mov ecx, dword ptr [esi + 0x24c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x4C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588360E4: cmp eax, ecx
        __asm _emit 0x3B
        __asm _emit 0xC1
        // 0x588360E6: jne 0x58836101
        __asm _emit 0x75
        __asm _emit 0x19
        // 0x588360E8: call 0x589081c0
        __asm _emit 0xE8
        __asm _emit 0xD3
        __asm _emit 0x20
        __asm _emit 0x0D
        __asm _emit 0x00
        // 0x588360ED: mov ecx, dword ptr [esi + 0x250]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x50
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588360F3: push eax
        __asm _emit 0x50
        // 0x588360F4: call 0x58908830
        __asm _emit 0xE8
        __asm _emit 0x37
        __asm _emit 0x27
        __asm _emit 0x0D
        __asm _emit 0x00
        // 0x588360F9: mov ecx, dword ptr [esi + 0x24c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x4C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588360FF: jmp 0x58836122
        __asm _emit 0xEB
        __asm _emit 0x21
        // 0x58836101: mov ecx, dword ptr [esi + 0x250]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x50
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58836107: cmp eax, ecx
        __asm _emit 0x3B
        __asm _emit 0xC1
        // 0x58836109: jne 0x5883613f
        __asm _emit 0x75
        __asm _emit 0x34
        // 0x5883610B: call 0x589081c0
        __asm _emit 0xE8
        __asm _emit 0xB0
        __asm _emit 0x20
        __asm _emit 0x0D
        __asm _emit 0x00
        // 0x58836110: mov ecx, dword ptr [esi + 0x24c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x4C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58836116: push eax
        __asm _emit 0x50
        // 0x58836117: call 0x58908830
        __asm _emit 0xE8
        __asm _emit 0x14
        __asm _emit 0x27
        __asm _emit 0x0D
        __asm _emit 0x00
        // 0x5883611C: mov ecx, dword ptr [esi + 0x250]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x50
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58836122: call 0x589081c0
        __asm _emit 0xE8
        __asm _emit 0x99
        __asm _emit 0x20
        __asm _emit 0x0D
        __asm _emit 0x00
        // 0x58836127: mov ecx, dword ptr [esi + 0x254]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x54
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883612D: push eax
        __asm _emit 0x50
        // 0x5883612E: call 0x58908830
        __asm _emit 0xE8
        __asm _emit 0xFD
        __asm _emit 0x26
        __asm _emit 0x0D
        __asm _emit 0x00
        // 0x58836133: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x58836135: call 0x58834520
        __asm _emit 0xE8
        __asm _emit 0xE6
        __asm _emit 0xE3
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5883613A: jmp 0x5883641d
        __asm _emit 0xE9
        __asm _emit 0xDE
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883613F: mov ecx, dword ptr [esi + 0x254]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x54
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58836145: cmp eax, ecx
        __asm _emit 0x3B
        __asm _emit 0xC1
        // 0x58836147: jne 0x5883617d
        __asm _emit 0x75
        __asm _emit 0x34
        // 0x58836149: call 0x589081c0
        __asm _emit 0xE8
        __asm _emit 0x72
        __asm _emit 0x20
        __asm _emit 0x0D
        __asm _emit 0x00
        // 0x5883614E: mov ecx, dword ptr [esi + 0x24c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x4C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58836154: push eax
        __asm _emit 0x50
        // 0x58836155: call 0x58908830
        __asm _emit 0xE8
        __asm _emit 0xD6
        __asm _emit 0x26
        __asm _emit 0x0D
        __asm _emit 0x00
        // 0x5883615A: mov ecx, dword ptr [esi + 0x254]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x54
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58836160: call 0x589081c0
        __asm _emit 0xE8
        __asm _emit 0x5B
        __asm _emit 0x20
        __asm _emit 0x0D
        __asm _emit 0x00
        // 0x58836165: mov ecx, dword ptr [esi + 0x250]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x50
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883616B: push eax
        __asm _emit 0x50
        // 0x5883616C: call 0x58908830
        __asm _emit 0xE8
        __asm _emit 0xBF
        __asm _emit 0x26
        __asm _emit 0x0D
        __asm _emit 0x00
        // 0x58836171: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x58836173: call 0x58834520
        __asm _emit 0xE8
        __asm _emit 0xA8
        __asm _emit 0xE3
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58836178: jmp 0x5883641d
        __asm _emit 0xE9
        __asm _emit 0xA0
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883617D: cmp eax, dword ptr [esi + 0x294]
        __asm _emit 0x3B
        __asm _emit 0x86
        __asm _emit 0x94
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58836183: jne 0x588361a3
        __asm _emit 0x75
        __asm _emit 0x1E
        // 0x58836185: mov ecx, dword ptr [esi + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x30
        // 0x58836188: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5883618A: mov byte ptr [esi + 0x320], 1
        __asm _emit 0xC6
        __asm _emit 0x86
        __asm _emit 0x20
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        // 0x58836191: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x58836193: mov edx, dword ptr [eax + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x18
        // 0x58836196: push 0xf231
        __asm _emit 0x68
        __asm _emit 0x31
        __asm _emit 0xF2
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883619B: push esi
        __asm _emit 0x56
        // 0x5883619C: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x5883619E: jmp 0x5883641d
        __asm _emit 0xE9
        __asm _emit 0x7A
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588361A3: cmp eax, dword ptr [esi + 0x298]
        __asm _emit 0x3B
        __asm _emit 0x86
        __asm _emit 0x98
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588361A9: jne 0x5883626c
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xBD
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588361AF: mov eax, dword ptr [esi + 0x27c]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x7C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588361B5: mov eax, dword ptr [eax + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x6C
        // 0x588361B8: push eax
        __asm _emit 0x50
        // 0x588361B9: call dword ptr [0x5898c1a8]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0xA8
        __asm _emit 0xC1
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x588361BF: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588361C1: jle 0x5883641d
        __asm _emit 0x0F
        __asm _emit 0x8E
        __asm _emit 0x56
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588361C7: mov ecx, dword ptr [esi + 0x27c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x7C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588361CD: mov eax, dword ptr [ecx + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x41
        __asm _emit 0x6C
        // 0x588361D0: push eax
        __asm _emit 0x50
        // 0x588361D1: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x588361D3: call 0x58835920
        __asm _emit 0xE8
        __asm _emit 0x48
        __asm _emit 0xF7
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588361D8: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588361DA: jne 0x588361f5
        __asm _emit 0x75
        __asm _emit 0x19
        // 0x588361DC: mov edx, dword ptr [esi + 0x27c]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0x7C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588361E2: mov eax, dword ptr [edx + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x6C
        // 0x588361E5: push eax
        __asm _emit 0x50
        // 0x588361E6: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x588361E8: call 0x58835b30
        __asm _emit 0xE8
        __asm _emit 0x43
        __asm _emit 0xF9
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588361ED: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588361EF: je 0x5883641d
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x28
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588361F5: mov ecx, dword ptr [esi + 0x24c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x4C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588361FB: call 0x589081c0
        __asm _emit 0xE8
        __asm _emit 0xC0
        __asm _emit 0x1F
        __asm _emit 0x0D
        __asm _emit 0x00
        // 0x58836200: mov ecx, dword ptr [esi + 0x24c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x4C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58836206: mov edi, eax
        __asm _emit 0x8B
        __asm _emit 0xF8
        // 0x58836208: push edi
        __asm _emit 0x57
        // 0x58836209: call 0x589081e0
        __asm _emit 0xE8
        __asm _emit 0xD2
        __asm _emit 0x1F
        __asm _emit 0x0D
        __asm _emit 0x00
        // 0x5883620E: mov ecx, dword ptr [esi + 0x250]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x50
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58836214: push edi
        __asm _emit 0x57
        // 0x58836215: call 0x589081e0
        __asm _emit 0xE8
        __asm _emit 0xC6
        __asm _emit 0x1F
        __asm _emit 0x0D
        __asm _emit 0x00
        // 0x5883621A: mov ecx, dword ptr [esi + 0x254]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x54
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58836220: push edi
        __asm _emit 0x57
        // 0x58836221: call 0x589081e0
        __asm _emit 0xE8
        __asm _emit 0xBA
        __asm _emit 0x1F
        __asm _emit 0x0D
        __asm _emit 0x00
        // 0x58836226: mov ecx, dword ptr [esi + 0x1a0]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xA0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883622C: sub ecx, dword ptr [esi + 0x19c]
        __asm _emit 0x2B
        __asm _emit 0x8E
        __asm _emit 0x9C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58836232: mov eax, 0x30c30c31
        __asm _emit 0xB8
        __asm _emit 0x31
        __asm _emit 0x0C
        __asm _emit 0xC3
        __asm _emit 0x30
        // 0x58836237: imul ecx
        __asm _emit 0xF7
        __asm _emit 0xE9
        // 0x58836239: mov ecx, dword ptr [esi + 0x268]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x68
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883623F: sub ecx, dword ptr [esi + 0x264]
        __asm _emit 0x2B
        __asm _emit 0x8E
        __asm _emit 0x64
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58836245: sar edx, 4
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x04
        // 0x58836248: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x5883624A: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x5883624D: sar ecx, 2
        __asm _emit 0xC1
        __asm _emit 0xF9
        __asm _emit 0x02
        // 0x58836250: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x58836252: add eax, ecx
        __asm _emit 0x03
        __asm _emit 0xC1
        // 0x58836254: mov ecx, dword ptr [esi + 0x220]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x20
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883625A: push eax
        __asm _emit 0x50
        // 0x5883625B: call 0x58907360
        __asm _emit 0xE8
        __asm _emit 0x00
        __asm _emit 0x11
        __asm _emit 0x0D
        __asm _emit 0x00
        // 0x58836260: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x58836262: call 0x58834030
        __asm _emit 0xE8
        __asm _emit 0xC9
        __asm _emit 0xDD
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58836267: jmp 0x5883641d
        __asm _emit 0xE9
        __asm _emit 0xB1
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883626C: cmp eax, dword ptr [esi + 0x29c]
        __asm _emit 0x3B
        __asm _emit 0x86
        __asm _emit 0x9C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58836272: jne 0x588362a5
        __asm _emit 0x75
        __asm _emit 0x31
        // 0x58836274: mov edx, dword ptr [0x58a245b4]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0xB4
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5883627A: cmp word ptr [edx + 0xd2c], 0
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xBA
        __asm _emit 0x2C
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58836282: jne 0x5883641d
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x95
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58836288: mov ecx, dword ptr [esi + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x30
        // 0x5883628B: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x5883628D: mov byte ptr [esi + 0x320], bl
        __asm _emit 0x88
        __asm _emit 0x9E
        __asm _emit 0x20
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58836293: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x58836295: mov edx, dword ptr [eax + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x18
        // 0x58836298: push 0xf231
        __asm _emit 0x68
        __asm _emit 0x31
        __asm _emit 0xF2
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883629D: push esi
        __asm _emit 0x56
        // 0x5883629E: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x588362A0: jmp 0x5883641d
        __asm _emit 0xE9
        __asm _emit 0x78
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588362A5: cmp eax, dword ptr [esi + 0x13c]
        __asm _emit 0x3B
        __asm _emit 0x86
        __asm _emit 0x3C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588362AB: jne 0x588362e2
        __asm _emit 0x75
        __asm _emit 0x35
        // 0x588362AD: mov eax, dword ptr [0x58a245b4]
        __asm _emit 0xA1
        __asm _emit 0xB4
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588362B2: cmp word ptr [eax + 0xd2c], 0
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x2C
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588362BA: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588362BC: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588362BE: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588362C0: jne 0x588362d8
        __asm _emit 0x75
        __asm _emit 0x16
        // 0x588362C2: push 0x12f
        __asm _emit 0x68
        __asm _emit 0x2F
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588362C7: call 0x5876baf0
        __asm _emit 0xE8
        __asm _emit 0x24
        __asm _emit 0x58
        __asm _emit 0xF3
        __asm _emit 0xFF
        // 0x588362CC: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588362CE: call 0x5876a570
        __asm _emit 0xE8
        __asm _emit 0x9D
        __asm _emit 0x42
        __asm _emit 0xF3
        __asm _emit 0xFF
        // 0x588362D3: jmp 0x5883641d
        __asm _emit 0xE9
        __asm _emit 0x45
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588362D8: push 0x48a
        __asm _emit 0x68
        __asm _emit 0x8A
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588362DD: jmp 0x58836411
        __asm _emit 0xE9
        __asm _emit 0x2F
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588362E2: cmp eax, dword ptr [esi + 0xe0]
        __asm _emit 0x3B
        __asm _emit 0x86
        __asm _emit 0xE0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588362E8: jne 0x588362fc
        __asm _emit 0x75
        __asm _emit 0x12
        // 0x588362EA: mov ecx, dword ptr [esi + 0x1d0]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xD0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588362F0: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x588362F2: mov eax, dword ptr [edx + 4]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x04
        // 0x588362F5: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x588362F7: jmp 0x5883641d
        __asm _emit 0xE9
        __asm _emit 0x21
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588362FC: cmp eax, dword ptr [esi + 0x1dc]
        __asm _emit 0x3B
        __asm _emit 0x86
        __asm _emit 0xDC
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58836302: jne 0x58836383
        __asm _emit 0x75
        __asm _emit 0x7F
        // 0x58836304: cmp dword ptr [0x58a0b4a0], 0
        __asm _emit 0x83
        __asm _emit 0x3D
        __asm _emit 0xA0
        __asm _emit 0xB4
        __asm _emit 0xA0
        __asm _emit 0x58
        __asm _emit 0x00
        // 0x5883630B: jbe 0x5883641d
        __asm _emit 0x0F
        __asm _emit 0x86
        __asm _emit 0x0C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58836311: mov ecx, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x04
        // 0x58836314: mov edx, dword ptr [esi + 8]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x08
        // 0x58836317: add ecx, 0x197
        __asm _emit 0x81
        __asm _emit 0xC1
        __asm _emit 0x97
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883631D: mov byte ptr [esi + 0x1ec], 1
        __asm _emit 0xC6
        __asm _emit 0x86
        __asm _emit 0xEC
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        // 0x58836324: mov dword ptr [esi + 0x1e4], 0
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0xE4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883632E: mov eax, dword ptr [0x58a245b4]
        __asm _emit 0xA1
        __asm _emit 0xB4
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58836333: mov dword ptr [esp + 0x10], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58836337: mov ecx, dword ptr [esi + 0x1d8]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xD8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883633D: add edx, 0x7d
        __asm _emit 0x83
        __asm _emit 0xC2
        __asm _emit 0x7D
        // 0x58836340: push eax
        __asm _emit 0x50
        // 0x58836341: mov dword ptr [esp + 0x18], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x58836345: call 0x587c8190
        __asm _emit 0xE8
        __asm _emit 0x46
        __asm _emit 0x1E
        __asm _emit 0xF9
        __asm _emit 0xFF
        // 0x5883634A: lea ecx, [esp + 0x10]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x5883634E: push ecx
        __asm _emit 0x51
        // 0x5883634F: push 0x5899e2b8
        __asm _emit 0x68
        __asm _emit 0xB8
        __asm _emit 0xE2
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x58836354: call dword ptr [0x5898c030]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xC0
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5883635A: mov edx, dword ptr [0x58a0b468]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0x68
        __asm _emit 0xB4
        __asm _emit 0xA0
        __asm _emit 0x58
        // 0x58836360: mov ecx, dword ptr [esi + 0x1d8]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xD8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58836366: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x58836369: push eax
        __asm _emit 0x50
        // 0x5883636A: push edx
        __asm _emit 0x52
        // 0x5883636B: push esi
        __asm _emit 0x56
        // 0x5883636C: call 0x587c8910
        __asm _emit 0xE8
        __asm _emit 0x9F
        __asm _emit 0x25
        __asm _emit 0xF9
        __asm _emit 0xFF
        // 0x58836371: mov ecx, dword ptr [esi + 0x1d8]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xD8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58836377: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x58836379: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x5883637C: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x5883637E: jmp 0x5883641d
        __asm _emit 0xE9
        __asm _emit 0x9A
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58836383: cmp eax, dword ptr [esi + 0x1e0]
        __asm _emit 0x3B
        __asm _emit 0x86
        __asm _emit 0xE0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58836389: jne 0x5883641d
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x8E
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883638F: cmp word ptr [0x58a0b4a8], bp
        __asm _emit 0x66
        __asm _emit 0x39
        __asm _emit 0x2D
        __asm _emit 0xA8
        __asm _emit 0xB4
        __asm _emit 0xA0
        __asm _emit 0x58
        // 0x58836396: jne 0x58836406
        __asm _emit 0x75
        __asm _emit 0x6E
        // 0x58836398: mov ecx, dword ptr [esi + 8]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x08
        // 0x5883639B: mov eax, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x04
        // 0x5883639E: add ecx, 0x7d
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x7D
        // 0x588363A1: mov byte ptr [esi + 0x1ec], bl
        __asm _emit 0x88
        __asm _emit 0x9E
        __asm _emit 0xEC
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588363A7: mov dword ptr [esi + 0x1e8], 0
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0xE8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588363B1: mov edx, dword ptr [0x58a245b4]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0xB4
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588363B7: add eax, 0x197
        __asm _emit 0x05
        __asm _emit 0x97
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588363BC: mov dword ptr [esp + 0x24], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x588363C0: mov ecx, dword ptr [esi + 0x1d8]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xD8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588363C6: push edx
        __asm _emit 0x52
        // 0x588363C7: mov dword ptr [esp + 0x24], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x588363CB: call 0x587c8190
        __asm _emit 0xE8
        __asm _emit 0xC0
        __asm _emit 0x1D
        __asm _emit 0xF9
        __asm _emit 0xFF
        // 0x588363D0: lea eax, [esp + 0x20]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x588363D4: push eax
        __asm _emit 0x50
        // 0x588363D5: push 0x5899e294
        __asm _emit 0x68
        __asm _emit 0x94
        __asm _emit 0xE2
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x588363DA: call dword ptr [0x5898c030]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xC0
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x588363E0: mov ecx, dword ptr [esi + 0x1f0]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xF0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588363E6: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x588363E9: push eax
        __asm _emit 0x50
        // 0x588363EA: push ecx
        __asm _emit 0x51
        // 0x588363EB: mov ecx, dword ptr [esi + 0x1d8]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xD8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588363F1: push esi
        __asm _emit 0x56
        // 0x588363F2: call 0x587c8910
        __asm _emit 0xE8
        __asm _emit 0x19
        __asm _emit 0x25
        __asm _emit 0xF9
        __asm _emit 0xFF
        // 0x588363F7: mov ecx, dword ptr [esi + 0x1d8]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xD8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588363FD: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x588363FF: mov eax, dword ptr [edx + 4]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x04
        // 0x58836402: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x58836404: jmp 0x5883641d
        __asm _emit 0xEB
        __asm _emit 0x17
        // 0x58836406: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58836408: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5883640A: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5883640C: push 0x475
        __asm _emit 0x68
        __asm _emit 0x75
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58836411: call 0x5876baf0
        __asm _emit 0xE8
        __asm _emit 0xDA
        __asm _emit 0x56
        __asm _emit 0xF3
        __asm _emit 0xFF
        // 0x58836416: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x58836418: call 0x58764d30
        __asm _emit 0xE8
        __asm _emit 0x13
        __asm _emit 0xE9
        __asm _emit 0xF2
        __asm _emit 0xFF
        // 0x5883641D: cmp word ptr [0x58a0b4a8], bp
        __asm _emit 0x66
        __asm _emit 0x39
        __asm _emit 0x2D
        __asm _emit 0xA8
        __asm _emit 0xB4
        __asm _emit 0xA0
        __asm _emit 0x58
        // 0x58836424: jne 0x588368d7
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xAD
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883642A: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x5883642C: lea ebp, [esi + 0x1bc]
        __asm _emit 0x8D
        __asm _emit 0xAE
        __asm _emit 0xBC
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58836432: mov bl, 8
        __asm _emit 0xB3
        __asm _emit 0x08
        // 0x58836434: mov ecx, dword ptr [esp + 0x130]
        __asm _emit 0x8B
        __asm _emit 0x8C
        __asm _emit 0x24
        __asm _emit 0x30
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883643B: cmp ecx, dword ptr [ebp]
        __asm _emit 0x3B
        __asm _emit 0x4D
        __asm _emit 0x00
        // 0x5883643E: jne 0x58836465
        __asm _emit 0x75
        __asm _emit 0x25
        // 0x58836440: mov ecx, dword ptr [esi + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x30
        // 0x58836443: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x58836445: mov dword ptr [esi + 0x324], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0x24
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883644B: mov byte ptr [esi + 0x320], 2
        __asm _emit 0xC6
        __asm _emit 0x86
        __asm _emit 0x20
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x02
        // 0x58836452: mov byte ptr [esi + 0x321], bl
        __asm _emit 0x88
        __asm _emit 0x9E
        __asm _emit 0x21
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58836458: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x5883645A: mov eax, dword ptr [edx + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x18
        // 0x5883645D: push 0xf231
        __asm _emit 0x68
        __asm _emit 0x31
        __asm _emit 0xF2
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58836462: push esi
        __asm _emit 0x56
        // 0x58836463: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x58836465: inc edi
        __asm _emit 0x47
        // 0x58836466: add ebp, 4
        __asm _emit 0x83
        __asm _emit 0xC5
        __asm _emit 0x04
        // 0x58836469: cmp edi, 5
        __asm _emit 0x83
        __asm _emit 0xFF
        __asm _emit 0x05
        // 0x5883646C: jne 0x58836434
        __asm _emit 0x75
        __asm _emit 0xC6
        // 0x5883646E: jmp 0x588368d7
        __asm _emit 0xE9
        __asm _emit 0x64
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58836473: cmp eax, 0xf230
        __asm _emit 0x3D
        __asm _emit 0x30
        __asm _emit 0xF2
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58836478: jne 0x58836823
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xA5
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883647E: mov ecx, dword ptr [0x58a245b4]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xB4
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58836484: mov ecx, dword ptr [ecx + 0xdc]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0xDC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883648A: mov eax, dword ptr [esp + 0x130]
        __asm _emit 0x8B
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x30
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58836491: cmp eax, ecx
        __asm _emit 0x3B
        __asm _emit 0xC1
        // 0x58836493: jne 0x588367d4
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x3B
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58836499: mov al, byte ptr [esi + 0x320]
        __asm _emit 0x8A
        __asm _emit 0x86
        __asm _emit 0x20
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883649F: cmp al, 1
        __asm _emit 0x3C
        __asm _emit 0x01
        // 0x588364A1: jne 0x588366df
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x38
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588364A7: mov edx, dword ptr [esi + 0x27c]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0x7C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588364AD: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588364AF: mov dword ptr [esp + 0x91], eax
        __asm _emit 0x89
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x91
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588364B6: mov dword ptr [esp + 0x95], eax
        __asm _emit 0x89
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x95
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588364BD: mov dword ptr [esp + 0x99], eax
        __asm _emit 0x89
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x99
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588364C4: mov dword ptr [esp + 0x9d], eax
        __asm _emit 0x89
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x9D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588364CB: mov dword ptr [esp + 0xa1], eax
        __asm _emit 0x89
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0xA1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588364D2: mov word ptr [esp + 0xa5], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0xA5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588364DA: mov byte ptr [esp + 0xa7], al
        __asm _emit 0x88
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0xA7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588364E1: mov byte ptr [esp + 0x90], 0
        __asm _emit 0xC6
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588364E9: mov edx, dword ptr [edx + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x52
        __asm _emit 0x6C
        // 0x588364EC: mov edi, 0x18
        __asm _emit 0xBF
        __asm _emit 0x18
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588364F1: lea eax, [esp + 0x90]
        __asm _emit 0x8D
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588364F8: jmp 0x58836500
        __asm _emit 0xEB
        __asm _emit 0x06
    }
}

// Ghidra body range 0x58836500..0x588368F4; 1012 mapped bytes.
extern "C" __declspec(naked) void FUN_58835f70_segment_01() {
    __asm {
        // 0x58836500: lea ecx, [edi + 0x7fffffe6]
        __asm _emit 0x8D
        __asm _emit 0x8F
        __asm _emit 0xE6
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0x7F
        // 0x58836506: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x58836508: je 0x5883651b
        __asm _emit 0x74
        __asm _emit 0x11
        // 0x5883650A: mov cl, byte ptr [edx]
        __asm _emit 0x8A
        __asm _emit 0x0A
        // 0x5883650C: test cl, cl
        __asm _emit 0x84
        __asm _emit 0xC9
        // 0x5883650E: je 0x5883651b
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x58836510: mov byte ptr [eax], cl
        __asm _emit 0x88
        __asm _emit 0x08
        // 0x58836512: inc eax
        __asm _emit 0x40
        // 0x58836513: inc edx
        __asm _emit 0x42
        // 0x58836514: sub edi, 1
        __asm _emit 0x83
        __asm _emit 0xEF
        __asm _emit 0x01
        // 0x58836517: jne 0x58836500
        __asm _emit 0x75
        __asm _emit 0xE7
        // 0x58836519: jmp 0x5883651f
        __asm _emit 0xEB
        __asm _emit 0x04
        // 0x5883651B: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x5883651D: jne 0x58836520
        __asm _emit 0x75
        __asm _emit 0x01
        // 0x5883651F: dec eax
        __asm _emit 0x48
        // 0x58836520: lea edx, [esp + 0x18]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x58836524: lea ebx, [esi + 0x258]
        __asm _emit 0x8D
        __asm _emit 0x9E
        __asm _emit 0x58
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883652A: push edx
        __asm _emit 0x52
        // 0x5883652B: mov ecx, ebx
        __asm _emit 0x8B
        __asm _emit 0xCB
        // 0x5883652D: mov byte ptr [eax], 0
        __asm _emit 0xC6
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58836530: call 0x58834b00
        __asm _emit 0xE8
        __asm _emit 0xCB
        __asm _emit 0xE5
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58836535: mov eax, dword ptr [ebx + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x43
        __asm _emit 0x10
        // 0x58836538: mov dword ptr [esp + 0x10], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x5883653C: cmp dword ptr [ebx + 0xc], eax
        __asm _emit 0x39
        __asm _emit 0x43
        __asm _emit 0x0C
        // 0x5883653F: jbe 0x58836546
        __asm _emit 0x76
        __asm _emit 0x05
        // 0x58836541: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x2C
        __asm _emit 0x67
        __asm _emit 0x14
        __asm _emit 0x00
        // 0x58836546: mov edi, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x5883654A: mov eax, dword ptr [ebx]
        __asm _emit 0x8B
        __asm _emit 0x03
        // 0x5883654C: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x5883654E: je 0x58836554
        __asm _emit 0x74
        __asm _emit 0x04
        // 0x58836550: cmp edi, eax
        __asm _emit 0x3B
        __asm _emit 0xF8
        // 0x58836552: je 0x58836559
        __asm _emit 0x74
        __asm _emit 0x05
        // 0x58836554: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x19
        __asm _emit 0x67
        __asm _emit 0x14
        __asm _emit 0x00
        // 0x58836559: mov ebp, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x5883655D: cmp ebp, dword ptr [esp + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58836561: je 0x58836602
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x9B
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58836567: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x58836569: jne 0x588365a2
        __asm _emit 0x75
        __asm _emit 0x37
        // 0x5883656B: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x02
        __asm _emit 0x67
        __asm _emit 0x14
        __asm _emit 0x00
        // 0x58836570: cmp ebp, dword ptr [edi + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x6F
        __asm _emit 0x10
        // 0x58836573: jb 0x5883657a
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x58836575: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xF8
        __asm _emit 0x66
        __asm _emit 0x14
        __asm _emit 0x00
        // 0x5883657A: mov eax, dword ptr [ebp]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x00
        // 0x5883657D: push eax
        __asm _emit 0x50
        // 0x5883657E: lea ecx, [esp + 0x94]
        __asm _emit 0x8D
        __asm _emit 0x8C
        __asm _emit 0x24
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58836585: push ecx
        __asm _emit 0x51
        // 0x58836586: call dword ptr [0x5898c1a4]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0xA4
        __asm _emit 0xC1
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5883658C: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5883658E: je 0x588365a6
        __asm _emit 0x74
        __asm _emit 0x16
        // 0x58836590: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58836592: lea edx, [esp + 0x2c]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x58836596: push edx
        __asm _emit 0x52
        // 0x58836597: lea ecx, [esp + 0x20]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x5883659B: call 0x587a8520
        __asm _emit 0xE8
        __asm _emit 0x80
        __asm _emit 0x1F
        __asm _emit 0xF7
        __asm _emit 0xFF
        // 0x588365A0: jmp 0x58836535
        __asm _emit 0xEB
        __asm _emit 0x93
        // 0x588365A2: mov edi, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x3F
        // 0x588365A4: jmp 0x58836570
        __asm _emit 0xEB
        __asm _emit 0xCA
        // 0x588365A6: mov eax, dword ptr [esi + 0x27c]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x7C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588365AC: mov ecx, dword ptr [eax + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x6C
        // 0x588365AF: mov esi, dword ptr [0x5898c198]
        __asm _emit 0x8B
        __asm _emit 0x35
        __asm _emit 0x98
        __asm _emit 0xC1
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x588365B5: push ecx
        __asm _emit 0x51
        // 0x588365B6: lea edx, [esp + 0x34]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x588365BA: push edx
        __asm _emit 0x52
        // 0x588365BB: call esi
        __asm _emit 0xFF
        __asm _emit 0xD6
        // 0x588365BD: mov eax, dword ptr [0x58a245b4]
        __asm _emit 0xA1
        __asm _emit 0xB4
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588365C2: mov ecx, dword ptr [eax + 0xdc]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0xDC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588365C8: mov edx, dword ptr [ecx + 0x168]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588365CE: mov eax, dword ptr [edx + 0x64]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x64
        // 0x588365D1: mov ecx, dword ptr [eax + 0x80]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588365D7: push ecx
        __asm _emit 0x51
        // 0x588365D8: lea edx, [esp + 0x4c]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x4C
        // 0x588365DC: push edx
        __asm _emit 0x52
        // 0x588365DD: call esi
        __asm _emit 0xFF
        __asm _emit 0xD6
        // 0x588365DF: mov ecx, dword ptr [0x58a0b4a4]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xA4
        __asm _emit 0xB4
        __asm _emit 0xA0
        __asm _emit 0x58
        // 0x588365E5: mov edx, dword ptr [0x58a0b4a0]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0xA0
        __asm _emit 0xB4
        __asm _emit 0xA0
        __asm _emit 0x58
        // 0x588365EB: lea eax, [esp + 0x30]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x588365EF: push eax
        __asm _emit 0x50
        // 0x588365F0: push ecx
        __asm _emit 0x51
        // 0x588365F1: mov ecx, dword ptr [0x58a24588]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x88
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588365F7: push edx
        __asm _emit 0x52
        // 0x588365F8: call 0x587b9400
        __asm _emit 0xE8
        __asm _emit 0x03
        __asm _emit 0x2E
        __asm _emit 0xF8
        __asm _emit 0xFF
        // 0x588365FD: jmp 0x588368d7
        __asm _emit 0xE9
        __asm _emit 0xD5
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58836602: mov ebx, dword ptr [esi + 0x19c]
        __asm _emit 0x8B
        __asm _emit 0x9E
        __asm _emit 0x9C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58836608: cmp ebx, dword ptr [esi + 0x1a0]
        __asm _emit 0x3B
        __asm _emit 0x9E
        __asm _emit 0xA0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883660E: jbe 0x58836615
        __asm _emit 0x76
        __asm _emit 0x05
        // 0x58836610: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x5D
        __asm _emit 0x66
        __asm _emit 0x14
        __asm _emit 0x00
        // 0x58836615: mov edi, dword ptr [esi + 0x190]
        __asm _emit 0x8B
        __asm _emit 0xBE
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883661B: mov ebp, ebx
        __asm _emit 0x8B
        __asm _emit 0xEB
        // 0x5883661D: lea ecx, [ecx]
        __asm _emit 0x8D
        __asm _emit 0x49
        __asm _emit 0x00
        // 0x58836620: mov ebx, dword ptr [esi + 0x1a0]
        __asm _emit 0x8B
        __asm _emit 0x9E
        __asm _emit 0xA0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58836626: cmp dword ptr [esi + 0x19c], ebx
        __asm _emit 0x39
        __asm _emit 0x9E
        __asm _emit 0x9C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883662C: jbe 0x58836633
        __asm _emit 0x76
        __asm _emit 0x05
        // 0x5883662E: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x3F
        __asm _emit 0x66
        __asm _emit 0x14
        __asm _emit 0x00
        // 0x58836633: mov eax, dword ptr [esi + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58836639: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x5883663B: je 0x58836641
        __asm _emit 0x74
        __asm _emit 0x04
        // 0x5883663D: cmp edi, eax
        __asm _emit 0x3B
        __asm _emit 0xF8
        // 0x5883663F: je 0x58836646
        __asm _emit 0x74
        __asm _emit 0x05
        // 0x58836641: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x2C
        __asm _emit 0x66
        __asm _emit 0x14
        __asm _emit 0x00
        // 0x58836646: cmp ebp, ebx
        __asm _emit 0x3B
        __asm _emit 0xEB
        // 0x58836648: je 0x588368d7
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x89
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883664E: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x58836650: jne 0x58836693
        __asm _emit 0x75
        __asm _emit 0x41
        // 0x58836652: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x1B
        __asm _emit 0x66
        __asm _emit 0x14
        __asm _emit 0x00
        // 0x58836657: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58836659: cmp ebp, dword ptr [eax + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x68
        __asm _emit 0x10
        // 0x5883665C: jb 0x58836663
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x5883665E: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x0F
        __asm _emit 0x66
        __asm _emit 0x14
        __asm _emit 0x00
        // 0x58836663: lea eax, [ebp + 0x2d]
        __asm _emit 0x8D
        __asm _emit 0x45
        __asm _emit 0x2D
        // 0x58836666: push eax
        __asm _emit 0x50
        // 0x58836667: lea ecx, [esp + 0x94]
        __asm _emit 0x8D
        __asm _emit 0x8C
        __asm _emit 0x24
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883666E: push ecx
        __asm _emit 0x51
        // 0x5883666F: call dword ptr [0x5898c1a4]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0xA4
        __asm _emit 0xC1
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58836675: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58836677: je 0x5883669b
        __asm _emit 0x74
        __asm _emit 0x22
        // 0x58836679: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x5883667B: jne 0x58836697
        __asm _emit 0x75
        __asm _emit 0x1A
        // 0x5883667D: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xF0
        __asm _emit 0x65
        __asm _emit 0x14
        __asm _emit 0x00
        // 0x58836682: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58836684: cmp ebp, dword ptr [eax + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x68
        __asm _emit 0x10
        // 0x58836687: jb 0x5883668e
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x58836689: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xE4
        __asm _emit 0x65
        __asm _emit 0x14
        __asm _emit 0x00
        // 0x5883668E: add ebp, 0x54
        __asm _emit 0x83
        __asm _emit 0xC5
        __asm _emit 0x54
        // 0x58836691: jmp 0x58836620
        __asm _emit 0xEB
        __asm _emit 0x8D
        // 0x58836693: mov eax, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x07
        // 0x58836695: jmp 0x58836659
        __asm _emit 0xEB
        __asm _emit 0xC2
        // 0x58836697: mov eax, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x07
        // 0x58836699: jmp 0x58836684
        __asm _emit 0xEB
        __asm _emit 0xE9
        // 0x5883669B: mov edx, dword ptr [0x58a245b4]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0xB4
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588366A1: mov eax, dword ptr [edx + 0xdc]
        __asm _emit 0x8B
        __asm _emit 0x82
        __asm _emit 0xDC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588366A7: mov ecx, dword ptr [eax + 0x168]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588366AD: mov edx, dword ptr [ecx + 0x64]
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x64
        // 0x588366B0: mov esi, dword ptr [edx + 0x80]
        __asm _emit 0x8B
        __asm _emit 0xB2
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588366B6: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x588366B8: jne 0x588366db
        __asm _emit 0x75
        __asm _emit 0x21
        // 0x588366BA: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xB3
        __asm _emit 0x65
        __asm _emit 0x14
        __asm _emit 0x00
        // 0x588366BF: cmp ebp, dword ptr [edi + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x6F
        __asm _emit 0x10
        // 0x588366C2: jb 0x588366c9
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x588366C4: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xA9
        __asm _emit 0x65
        __asm _emit 0x14
        __asm _emit 0x00
        // 0x588366C9: mov ecx, dword ptr [0x58a24588]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x88
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588366CF: push esi
        __asm _emit 0x56
        // 0x588366D0: push ebp
        __asm _emit 0x55
        // 0x588366D1: call 0x587ba9e0
        __asm _emit 0xE8
        __asm _emit 0x0A
        __asm _emit 0x43
        __asm _emit 0xF8
        __asm _emit 0xFF
        // 0x588366D6: jmp 0x588368d7
        __asm _emit 0xE9
        __asm _emit 0xFC
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588366DB: mov edi, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x3F
        // 0x588366DD: jmp 0x588366bf
        __asm _emit 0xEB
        __asm _emit 0xE0
        // 0x588366DF: cmp al, 2
        __asm _emit 0x3C
        __asm _emit 0x02
        // 0x588366E1: jne 0x588367ac
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xC5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588366E7: cmp byte ptr [esi + 0x321], 8
        __asm _emit 0x80
        __asm _emit 0xBE
        __asm _emit 0x21
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x08
        // 0x588366EE: jne 0x58836750
        __asm _emit 0x75
        __asm _emit 0x60
        // 0x588366F0: mov eax, dword ptr [ecx + 0x168]
        __asm _emit 0x8B
        __asm _emit 0x81
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588366F6: mov ecx, dword ptr [eax + 0x64]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x64
        // 0x588366F9: mov edx, dword ptr [ecx + 0x80]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588366FF: mov edi, 0x18
        __asm _emit 0xBF
        __asm _emit 0x18
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58836704: lea eax, [esi + 0x328]
        __asm _emit 0x8D
        __asm _emit 0x86
        __asm _emit 0x28
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883670A: lea ebx, [ebx]
        __asm _emit 0x8D
        __asm _emit 0x9B
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58836710: lea ecx, [edi + 0x7fffffe6]
        __asm _emit 0x8D
        __asm _emit 0x8F
        __asm _emit 0xE6
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0x7F
        // 0x58836716: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x58836718: je 0x5883672b
        __asm _emit 0x74
        __asm _emit 0x11
        // 0x5883671A: mov cl, byte ptr [edx]
        __asm _emit 0x8A
        __asm _emit 0x0A
        // 0x5883671C: test cl, cl
        __asm _emit 0x84
        __asm _emit 0xC9
        // 0x5883671E: je 0x5883672b
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x58836720: mov byte ptr [eax], cl
        __asm _emit 0x88
        __asm _emit 0x08
        // 0x58836722: inc eax
        __asm _emit 0x40
        // 0x58836723: inc edx
        __asm _emit 0x42
        // 0x58836724: sub edi, 1
        __asm _emit 0x83
        __asm _emit 0xEF
        __asm _emit 0x01
        // 0x58836727: jne 0x58836710
        __asm _emit 0x75
        __asm _emit 0xE7
        // 0x58836729: jmp 0x5883672f
        __asm _emit 0xEB
        __asm _emit 0x04
        // 0x5883672B: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x5883672D: jne 0x58836730
        __asm _emit 0x75
        __asm _emit 0x01
        // 0x5883672F: dec eax
        __asm _emit 0x48
        // 0x58836730: mov byte ptr [eax], 0
        __asm _emit 0xC6
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58836733: mov edx, dword ptr [0x58a0b4a4]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0xA4
        __asm _emit 0xB4
        __asm _emit 0xA0
        __asm _emit 0x58
        // 0x58836739: mov eax, dword ptr [0x58a0b4a0]
        __asm _emit 0xA1
        __asm _emit 0xA0
        __asm _emit 0xB4
        __asm _emit 0xA0
        __asm _emit 0x58
        // 0x5883673E: mov ecx, dword ptr [0x58a24588]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x88
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58836744: push edx
        __asm _emit 0x52
        // 0x58836745: push eax
        __asm _emit 0x50
        // 0x58836746: call 0x587b9290
        __asm _emit 0xE8
        __asm _emit 0x45
        __asm _emit 0x2B
        __asm _emit 0xF8
        __asm _emit 0xFF
        // 0x5883674B: jmp 0x588368d7
        __asm _emit 0xE9
        __asm _emit 0x87
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58836750: mov ecx, dword ptr [esi + 0x27c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x7C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58836756: mov edx, dword ptr [ecx + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x6C
        // 0x58836759: mov esi, dword ptr [0x5898c198]
        __asm _emit 0x8B
        __asm _emit 0x35
        __asm _emit 0x98
        __asm _emit 0xC1
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5883675F: push edx
        __asm _emit 0x52
        // 0x58836760: lea eax, [esp + 0x64]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x64
        // 0x58836764: push eax
        __asm _emit 0x50
        // 0x58836765: call esi
        __asm _emit 0xFF
        __asm _emit 0xD6
        // 0x58836767: mov ecx, dword ptr [0x58a245b4]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xB4
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5883676D: mov edx, dword ptr [ecx + 0xdc]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0xDC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58836773: mov eax, dword ptr [edx + 0x168]
        __asm _emit 0x8B
        __asm _emit 0x82
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58836779: mov ecx, dword ptr [eax + 0x64]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x64
        // 0x5883677C: mov edx, dword ptr [ecx + 0x80]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58836782: push edx
        __asm _emit 0x52
        // 0x58836783: lea eax, [esp + 0x7c]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x7C
        // 0x58836787: push eax
        __asm _emit 0x50
        // 0x58836788: call esi
        __asm _emit 0xFF
        __asm _emit 0xD6
        // 0x5883678A: mov edx, dword ptr [0x58a0b4a4]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0xA4
        __asm _emit 0xB4
        __asm _emit 0xA0
        __asm _emit 0x58
        // 0x58836790: mov eax, dword ptr [0x58a0b4a0]
        __asm _emit 0xA1
        __asm _emit 0xA0
        __asm _emit 0xB4
        __asm _emit 0xA0
        __asm _emit 0x58
        // 0x58836795: lea ecx, [esp + 0x60]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x60
        // 0x58836799: push ecx
        __asm _emit 0x51
        // 0x5883679A: mov ecx, dword ptr [0x58a24588]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x88
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588367A0: push edx
        __asm _emit 0x52
        // 0x588367A1: push eax
        __asm _emit 0x50
        // 0x588367A2: call 0x587b9420
        __asm _emit 0xE8
        __asm _emit 0x79
        __asm _emit 0x2C
        __asm _emit 0xF8
        __asm _emit 0xFF
        // 0x588367A7: jmp 0x588368d7
        __asm _emit 0xE9
        __asm _emit 0x2B
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588367AC: cmp al, 3
        __asm _emit 0x3C
        __asm _emit 0x03
        // 0x588367AE: jne 0x588368d7
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x23
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588367B4: mov ecx, dword ptr [ecx + 0x168]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588367BA: mov edx, dword ptr [ecx + 0x64]
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x64
        // 0x588367BD: mov eax, dword ptr [edx + 0x80]
        __asm _emit 0x8B
        __asm _emit 0x82
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588367C3: mov ecx, dword ptr [0x58a24588]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x88
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588367C9: push eax
        __asm _emit 0x50
        // 0x588367CA: call 0x587b94a0
        __asm _emit 0xE8
        __asm _emit 0xD1
        __asm _emit 0x2C
        __asm _emit 0xF8
        __asm _emit 0xFF
        // 0x588367CF: jmp 0x588368d7
        __asm _emit 0xE9
        __asm _emit 0x03
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588367D4: cmp eax, esi
        __asm _emit 0x3B
        __asm _emit 0xC6
        // 0x588367D6: jne 0x588368d7
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xFB
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588367DC: mov ecx, dword ptr [esi + 0xd4]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xD4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588367E2: mov eax, dword ptr [esi + 0x1e8]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xE8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588367E8: mov edx, dword ptr [ecx + 0x64]
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x64
        // 0x588367EB: sub edx, eax
        __asm _emit 0x2B
        __asm _emit 0xD0
        // 0x588367ED: jns 0x5883680b
        __asm _emit 0x79
        __asm _emit 0x1C
        // 0x588367EF: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588367F1: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588367F3: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588367F5: push 0x481
        __asm _emit 0x68
        __asm _emit 0x81
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588367FA: call 0x5876baf0
        __asm _emit 0xE8
        __asm _emit 0xF1
        __asm _emit 0x52
        __asm _emit 0xF3
        __asm _emit 0xFF
        // 0x588367FF: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x58836801: call 0x58764d30
        __asm _emit 0xE8
        __asm _emit 0x2A
        __asm _emit 0xE5
        __asm _emit 0xF2
        __asm _emit 0xFF
        // 0x58836806: jmp 0x588368d7
        __asm _emit 0xE9
        __asm _emit 0xCC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883680B: mov ecx, dword ptr [0x58a24588]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x88
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58836811: push edi
        __asm _emit 0x57
        // 0x58836812: push eax
        __asm _emit 0x50
        // 0x58836813: mov eax, dword ptr [0x58a0b4a0]
        __asm _emit 0xA1
        __asm _emit 0xA0
        __asm _emit 0xB4
        __asm _emit 0xA0
        __asm _emit 0x58
        // 0x58836818: push eax
        __asm _emit 0x50
        // 0x58836819: call 0x587ba070
        __asm _emit 0xE8
        __asm _emit 0x52
        __asm _emit 0x38
        __asm _emit 0xF8
        __asm _emit 0xFF
        // 0x5883681E: jmp 0x588368d7
        __asm _emit 0xE9
        __asm _emit 0xB4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58836823: cmp eax, 0xf235
        __asm _emit 0x3D
        __asm _emit 0x35
        __asm _emit 0xF2
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58836828: jne 0x588368d7
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xA9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883682E: push 0x80
        __asm _emit 0x68
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58836833: lea ecx, [esp + 0xac]
        __asm _emit 0x8D
        __asm _emit 0x8C
        __asm _emit 0x24
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883683A: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5883683C: push ecx
        __asm _emit 0x51
        // 0x5883683D: call 0x5897cc48
        __asm _emit 0xE8
        __asm _emit 0x06
        __asm _emit 0x64
        __asm _emit 0x14
        __asm _emit 0x00
        // 0x58836842: mov al, byte ptr [esi + 0x1ec]
        __asm _emit 0x8A
        __asm _emit 0x86
        __asm _emit 0xEC
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58836848: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x5883684B: cmp al, 1
        __asm _emit 0x3C
        __asm _emit 0x01
        // 0x5883684D: jne 0x5883688c
        __asm _emit 0x75
        __asm _emit 0x3D
        // 0x5883684F: push edi
        __asm _emit 0x57
        // 0x58836850: lea edx, [esp + 0xac]
        __asm _emit 0x8D
        __asm _emit 0x94
        __asm _emit 0x24
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58836857: push 0x5898d18c
        __asm _emit 0x68
        __asm _emit 0x8C
        __asm _emit 0xD1
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5883685C: push edx
        __asm _emit 0x52
        // 0x5883685D: mov dword ptr [esi + 0x1e4], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0xE4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58836863: call dword ptr [0x5898c3c4]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0xC4
        __asm _emit 0xC3
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58836869: mov ecx, dword ptr [esi + 0x1d8]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xD8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883686F: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x58836871: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x58836874: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x58836877: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x58836879: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5883687B: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5883687D: lea eax, [esp + 0xb0]
        __asm _emit 0x8D
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0xB0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58836884: push eax
        __asm _emit 0x50
        // 0x58836885: push 0x142
        __asm _emit 0x68
        __asm _emit 0x42
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883688A: jmp 0x588368cb
        __asm _emit 0xEB
        __asm _emit 0x3F
        // 0x5883688C: cmp al, 2
        __asm _emit 0x3C
        __asm _emit 0x02
        // 0x5883688E: jne 0x588368d7
        __asm _emit 0x75
        __asm _emit 0x47
        // 0x58836890: push edi
        __asm _emit 0x57
        // 0x58836891: lea ecx, [esp + 0xac]
        __asm _emit 0x8D
        __asm _emit 0x8C
        __asm _emit 0x24
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58836898: push 0x5898d18c
        __asm _emit 0x68
        __asm _emit 0x8C
        __asm _emit 0xD1
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5883689D: push ecx
        __asm _emit 0x51
        // 0x5883689E: mov dword ptr [esi + 0x1e8], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0xE8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588368A4: call dword ptr [0x5898c3c4]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0xC4
        __asm _emit 0xC3
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x588368AA: mov ecx, dword ptr [esi + 0x1d8]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xD8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588368B0: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x588368B2: mov eax, dword ptr [edx + 8]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x08
        // 0x588368B5: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x588368B8: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x588368BA: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588368BC: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588368BE: lea ecx, [esp + 0xb0]
        __asm _emit 0x8D
        __asm _emit 0x8C
        __asm _emit 0x24
        __asm _emit 0xB0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588368C5: push ecx
        __asm _emit 0x51
        // 0x588368C6: push 0x143
        __asm _emit 0x68
        __asm _emit 0x43
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588368CB: call 0x5876baf0
        __asm _emit 0xE8
        __asm _emit 0x20
        __asm _emit 0x52
        __asm _emit 0xF3
        __asm _emit 0xFF
        // 0x588368D0: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588368D2: call 0x5876a570
        __asm _emit 0xE8
        __asm _emit 0x99
        __asm _emit 0x3C
        __asm _emit 0xF3
        __asm _emit 0xFF
        // 0x588368D7: mov ecx, dword ptr [esp + 0x128]
        __asm _emit 0x8B
        __asm _emit 0x8C
        __asm _emit 0x24
        __asm _emit 0x28
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588368DE: pop edi
        __asm _emit 0x5F
        // 0x588368DF: pop esi
        __asm _emit 0x5E
        // 0x588368E0: pop ebp
        __asm _emit 0x5D
        // 0x588368E1: pop ebx
        __asm _emit 0x5B
        // 0x588368E2: xor ecx, esp
        __asm _emit 0x33
        __asm _emit 0xCC
        // 0x588368E4: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588368E6: call 0x5897cbda
        __asm _emit 0xE8
        __asm _emit 0xEF
        __asm _emit 0x62
        __asm _emit 0x14
        __asm _emit 0x00
        // 0x588368EB: add esp, 0x11c
        __asm _emit 0x81
        __asm _emit 0xC4
        __asm _emit 0x1C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588368F1: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
    }
}
