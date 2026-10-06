// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x5873A7C0 .. +0x880 bytes.
// Source symbol alias: FUN_5873a7c0.
extern "C" __declspec(naked) void FUN_5873a7c0() {
    __asm {
        // 0x5873A7C0: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x5873A7C2: push 0x5897dcdb
        __asm _emit 0x68
        __asm _emit 0xDB
        __asm _emit 0xDC
        __asm _emit 0x97
        __asm _emit 0x58
        // 0x5873A7C7: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xA1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873A7CD: push eax
        __asm _emit 0x50
        // 0x5873A7CE: push ecx
        __asm _emit 0x51
        // 0x5873A7CF: push ebx
        __asm _emit 0x53
        // 0x5873A7D0: push ebp
        __asm _emit 0x55
        // 0x5873A7D1: push esi
        __asm _emit 0x56
        // 0x5873A7D2: push edi
        __asm _emit 0x57
        // 0x5873A7D3: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x5873A7D8: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x5873A7DA: push eax
        __asm _emit 0x50
        // 0x5873A7DB: lea eax, [esp + 0x18]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x5873A7DF: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xA3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873A7E5: mov ebp, ecx
        __asm _emit 0x8B
        __asm _emit 0xE9
        // 0x5873A7E7: mov edx, dword ptr [esp + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x5873A7EB: mov esi, dword ptr [esp + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x5873A7EF: mov eax, 0xfffe
        __asm _emit 0xB8
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873A7F4: and word ptr [ebp + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x45
        __asm _emit 0x24
        // 0x5873A7F8: mov ecx, 0xfffb
        __asm _emit 0xB9
        __asm _emit 0xFB
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873A7FD: and word ptr [ebp + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x4D
        __asm _emit 0x24
        // 0x5873A801: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xDB
        // 0x5873A803: mov dword ptr [ebp + 0x7c], edx
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0x7C
        // 0x5873A806: mov dword ptr [ebp + 0x4c8], 0xffffffff
        __asm _emit 0xC7
        __asm _emit 0x85
        __asm _emit 0xC8
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5873A810: mov dword ptr [ebp + 0x348], ebx
        __asm _emit 0x89
        __asm _emit 0x9D
        __asm _emit 0x48
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873A816: mov dword ptr [ebp + 0x32c], ebx
        __asm _emit 0x89
        __asm _emit 0x9D
        __asm _emit 0x2C
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873A81C: mov dword ptr [ebp + 0x330], ebx
        __asm _emit 0x89
        __asm _emit 0x9D
        __asm _emit 0x30
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873A822: lea edi, [ebp + 0x234]
        __asm _emit 0x8D
        __asm _emit 0xBD
        __asm _emit 0x34
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873A828: mov ecx, 0x35
        __asm _emit 0xB9
        __asm _emit 0x35
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873A82D: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xF3
        __asm _emit 0xA5
        // 0x5873A82F: mov eax, dword ptr [0x58a2459c]
        __asm _emit 0xA1
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5873A834: cmp word ptr [eax + 0x105f0], 0xa
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0xF0
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x0A
        // 0x5873A83C: jne 0x5873a8ee
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873A842: movzx eax, word ptr [ebp + 0x2cc]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x85
        __asm _emit 0xCC
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873A849: cmp ax, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x01
        // 0x5873A84D: jne 0x5873a85d
        __asm _emit 0x75
        __asm _emit 0x0E
        // 0x5873A84F: movzx eax, word ptr [ebp + 0x2e2]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x85
        __asm _emit 0xE2
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873A856: lea ecx, [eax + eax*2]
        __asm _emit 0x8D
        __asm _emit 0x0C
        __asm _emit 0x40
        // 0x5873A859: add ecx, ecx
        __asm _emit 0x03
        __asm _emit 0xC9
        // 0x5873A85B: jmp 0x5873a8b9
        __asm _emit 0xEB
        __asm _emit 0x5C
        // 0x5873A85D: cmp ax, 2
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x02
        // 0x5873A861: jne 0x5873a8a3
        __asm _emit 0x75
        __asm _emit 0x40
        // 0x5873A863: movzx edx, word ptr [ebp + 0x2e2]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x95
        __asm _emit 0xE2
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873A86A: mov dword ptr [esp + 0x2c], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x5873A86E: fild dword ptr [esp + 0x2c]
        __asm _emit 0xDB
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x5873A872: fnstcw word ptr [esp + 0x2c]
        __asm _emit 0xD9
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x5873A876: fmul qword ptr [0x5898cb40]
        __asm _emit 0xDC
        __asm _emit 0x0D
        __asm _emit 0x40
        __asm _emit 0xCB
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5873A87C: movzx eax, word ptr [esp + 0x2c]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x5873A881: or eax, 0xc00
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873A886: mov dword ptr [esp + 0x14], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x5873A88A: fdiv qword ptr [0x5898cb38]
        __asm _emit 0xDC
        __asm _emit 0x35
        __asm _emit 0x38
        __asm _emit 0xCB
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5873A890: fldcw word ptr [esp + 0x14]
        __asm _emit 0xD9
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x5873A894: fistp dword ptr [esp + 0x14]
        __asm _emit 0xDB
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x5873A898: mov ax, word ptr [esp + 0x14]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x5873A89D: fldcw word ptr [esp + 0x2c]
        __asm _emit 0xD9
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x5873A8A1: jmp 0x5873a8e7
        __asm _emit 0xEB
        __asm _emit 0x44
        // 0x5873A8A3: cmp ax, 3
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x03
        // 0x5873A8A7: movzx eax, word ptr [ebp + 0x2e2]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x85
        __asm _emit 0xE2
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873A8AE: jne 0x5873a8d3
        __asm _emit 0x75
        __asm _emit 0x23
        // 0x5873A8B0: lea ecx, [eax*8]
        __asm _emit 0x8D
        __asm _emit 0x0C
        __asm _emit 0xC5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873A8B7: sub ecx, eax
        __asm _emit 0x2B
        __asm _emit 0xC8
        // 0x5873A8B9: mov eax, 0x66666667
        __asm _emit 0xB8
        __asm _emit 0x67
        __asm _emit 0x66
        __asm _emit 0x66
        __asm _emit 0x66
        // 0x5873A8BE: imul ecx
        __asm _emit 0xF7
        __asm _emit 0xE9
        // 0x5873A8C0: sar edx, 2
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x02
        // 0x5873A8C3: mov ecx, edx
        __asm _emit 0x8B
        __asm _emit 0xCA
        // 0x5873A8C5: shr ecx, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE9
        __asm _emit 0x1F
        // 0x5873A8C8: add ecx, edx
        __asm _emit 0x03
        __asm _emit 0xCA
        // 0x5873A8CA: mov word ptr [ebp + 0x2e2], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8D
        __asm _emit 0xE2
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873A8D1: jmp 0x5873a8ee
        __asm _emit 0xEB
        __asm _emit 0x1B
        // 0x5873A8D3: lea ecx, [eax + eax*8]
        __asm _emit 0x8D
        __asm _emit 0x0C
        __asm _emit 0xC0
        // 0x5873A8D6: mov eax, 0x66666667
        __asm _emit 0xB8
        __asm _emit 0x67
        __asm _emit 0x66
        __asm _emit 0x66
        __asm _emit 0x66
        // 0x5873A8DB: imul ecx
        __asm _emit 0xF7
        __asm _emit 0xE9
        // 0x5873A8DD: sar edx, 2
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x02
        // 0x5873A8E0: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x5873A8E2: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x5873A8E5: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x5873A8E7: mov word ptr [ebp + 0x2e2], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0xE2
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873A8EE: cmp word ptr [ebp + 0x2cc], 2
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xBD
        __asm _emit 0xCC
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x02
        // 0x5873A8F6: jne 0x5873a93c
        __asm _emit 0x75
        __asm _emit 0x44
        // 0x5873A8F8: movzx ecx, word ptr [ebp + 0x2de]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x8D
        __asm _emit 0xDE
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873A8FF: imul ecx, ecx, 0x6e
        __asm _emit 0x6B
        __asm _emit 0xC9
        __asm _emit 0x6E
        // 0x5873A902: mov eax, 0x51eb851f
        __asm _emit 0xB8
        __asm _emit 0x1F
        __asm _emit 0x85
        __asm _emit 0xEB
        __asm _emit 0x51
        // 0x5873A907: imul ecx
        __asm _emit 0xF7
        __asm _emit 0xE9
        // 0x5873A909: sar edx, 5
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x05
        // 0x5873A90C: mov ecx, edx
        __asm _emit 0x8B
        __asm _emit 0xCA
        // 0x5873A90E: shr ecx, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE9
        __asm _emit 0x1F
        // 0x5873A911: add ecx, edx
        __asm _emit 0x03
        __asm _emit 0xCA
        // 0x5873A913: mov word ptr [ebp + 0x2de], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8D
        __asm _emit 0xDE
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873A91A: movzx ecx, word ptr [ebp + 0x2ce]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x8D
        __asm _emit 0xCE
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873A921: imul ecx, ecx, 0x6e
        __asm _emit 0x6B
        __asm _emit 0xC9
        __asm _emit 0x6E
        // 0x5873A924: mov eax, 0x51eb851f
        __asm _emit 0xB8
        __asm _emit 0x1F
        __asm _emit 0x85
        __asm _emit 0xEB
        __asm _emit 0x51
        // 0x5873A929: imul ecx
        __asm _emit 0xF7
        __asm _emit 0xE9
        // 0x5873A92B: sar edx, 5
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x05
        // 0x5873A92E: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x5873A930: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x5873A933: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x5873A935: mov word ptr [ebp + 0x2ce], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0xCE
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873A93C: movzx eax, word ptr [ebp + 0x2dc]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x85
        __asm _emit 0xDC
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873A943: mov ecx, dword ptr [ebp + 0x534]
        __asm _emit 0x8B
        __asm _emit 0x8D
        __asm _emit 0x34
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873A949: mov word ptr [ebp + 0x52c], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0x2C
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873A950: movzx eax, ax
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0xC0
        // 0x5873A953: push eax
        __asm _emit 0x50
        // 0x5873A954: push eax
        __asm _emit 0x50
        // 0x5873A955: call 0x5877e7a0
        __asm _emit 0xE8
        __asm _emit 0x46
        __asm _emit 0x3E
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x5873A95A: movzx eax, word ptr [ebp + 0x52c]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x85
        __asm _emit 0x2C
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873A961: mov ecx, dword ptr [ebp + 0x538]
        __asm _emit 0x8B
        __asm _emit 0x8D
        __asm _emit 0x38
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873A967: push eax
        __asm _emit 0x50
        // 0x5873A968: push eax
        __asm _emit 0x50
        // 0x5873A969: call 0x5877e7a0
        __asm _emit 0xE8
        __asm _emit 0x32
        __asm _emit 0x3E
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x5873A96E: mov eax, dword ptr [ebp + 0x534]
        __asm _emit 0x8B
        __asm _emit 0x85
        __asm _emit 0x34
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873A974: mov ecx, 0xfffe
        __asm _emit 0xB9
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873A979: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x5873A97D: mov eax, dword ptr [ebp + 0x538]
        __asm _emit 0x8B
        __asm _emit 0x85
        __asm _emit 0x38
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873A983: mov edx, ecx
        __asm _emit 0x8B
        __asm _emit 0xD1
        // 0x5873A985: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x5873A989: mov eax, dword ptr [ebp + 0x530]
        __asm _emit 0x8B
        __asm _emit 0x85
        __asm _emit 0x30
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873A98F: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x5873A993: movzx edi, word ptr [ebp + 0x2cc]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0xBD
        __asm _emit 0xCC
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873A99A: cmp di, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xFF
        __asm _emit 0x01
        // 0x5873A99E: jne 0x5873a9ff
        __asm _emit 0x75
        __asm _emit 0x5F
        // 0x5873A9A0: mov esi, dword ptr [esp + 0x38]
        __asm _emit 0x8B
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x5873A9A4: movzx ecx, word ptr [esi + 0x12]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x4E
        __asm _emit 0x12
        // 0x5873A9A8: movzx edx, word ptr [ebp + 0x2ce]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x95
        __asm _emit 0xCE
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873A9AF: add ecx, 0x64
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x64
        // 0x5873A9B2: imul ecx, edx
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xCA
        // 0x5873A9B5: mov eax, 0x51eb851f
        __asm _emit 0xB8
        __asm _emit 0x1F
        __asm _emit 0x85
        __asm _emit 0xEB
        __asm _emit 0x51
        // 0x5873A9BA: imul ecx
        __asm _emit 0xF7
        __asm _emit 0xE9
        // 0x5873A9BC: sar edx, 5
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x05
        // 0x5873A9BF: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x5873A9C1: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x5873A9C4: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x5873A9C6: movzx edx, word ptr [ebp + 0x2d8]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x95
        __asm _emit 0xD8
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873A9CD: mov word ptr [ebp + 0x2ce], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0xCE
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873A9D4: movzx ecx, word ptr [esi + 0x12]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x4E
        __asm _emit 0x12
        // 0x5873A9D8: add ecx, 0x64
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x64
        // 0x5873A9DB: imul ecx, edx
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xCA
        // 0x5873A9DE: mov eax, 0x51eb851f
        __asm _emit 0xB8
        __asm _emit 0x1F
        __asm _emit 0x85
        __asm _emit 0xEB
        __asm _emit 0x51
        // 0x5873A9E3: imul ecx
        __asm _emit 0xF7
        __asm _emit 0xE9
        // 0x5873A9E5: sar edx, 5
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x05
        // 0x5873A9E8: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x5873A9EA: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x5873A9ED: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x5873A9EF: mov word ptr [ebp + 0x2d8], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0xD8
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873A9F6: movzx ecx, word ptr [esi + 0x12]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x4E
        __asm _emit 0x12
        // 0x5873A9FA: jmp 0x5873aac7
        __asm _emit 0xE9
        __asm _emit 0xC8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873A9FF: cmp di, 2
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xFF
        __asm _emit 0x02
        // 0x5873AA03: jne 0x5873aa61
        __asm _emit 0x75
        __asm _emit 0x5C
        // 0x5873AA05: mov esi, dword ptr [esp + 0x38]
        __asm _emit 0x8B
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x5873AA09: movzx ecx, word ptr [esi + 0xe]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x4E
        __asm _emit 0x0E
        // 0x5873AA0D: movzx edx, word ptr [ebp + 0x2ce]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x95
        __asm _emit 0xCE
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873AA14: add ecx, 0x64
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x64
        // 0x5873AA17: imul ecx, edx
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xCA
        // 0x5873AA1A: mov eax, 0x51eb851f
        __asm _emit 0xB8
        __asm _emit 0x1F
        __asm _emit 0x85
        __asm _emit 0xEB
        __asm _emit 0x51
        // 0x5873AA1F: imul ecx
        __asm _emit 0xF7
        __asm _emit 0xE9
        // 0x5873AA21: sar edx, 5
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x05
        // 0x5873AA24: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x5873AA26: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x5873AA29: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x5873AA2B: movzx edx, word ptr [ebp + 0x2d8]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x95
        __asm _emit 0xD8
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873AA32: mov word ptr [ebp + 0x2ce], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0xCE
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873AA39: movzx ecx, word ptr [esi + 0xe]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x4E
        __asm _emit 0x0E
        // 0x5873AA3D: add ecx, 0x64
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x64
        // 0x5873AA40: imul ecx, edx
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xCA
        // 0x5873AA43: mov eax, 0x51eb851f
        __asm _emit 0xB8
        __asm _emit 0x1F
        __asm _emit 0x85
        __asm _emit 0xEB
        __asm _emit 0x51
        // 0x5873AA48: imul ecx
        __asm _emit 0xF7
        __asm _emit 0xE9
        // 0x5873AA4A: sar edx, 5
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x05
        // 0x5873AA4D: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x5873AA4F: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x5873AA52: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x5873AA54: mov word ptr [ebp + 0x2d8], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0xD8
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873AA5B: movzx ecx, word ptr [esi + 0xe]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x4E
        __asm _emit 0x0E
        // 0x5873AA5F: jmp 0x5873aac7
        __asm _emit 0xEB
        __asm _emit 0x66
        // 0x5873AA61: cmp di, 3
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xFF
        __asm _emit 0x03
        // 0x5873AA65: je 0x5873aa6d
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x5873AA67: cmp di, 4
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xFF
        __asm _emit 0x04
        // 0x5873AA6B: jne 0x5873aacd
        __asm _emit 0x75
        __asm _emit 0x60
        // 0x5873AA6D: mov esi, dword ptr [esp + 0x38]
        __asm _emit 0x8B
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x5873AA71: movzx ecx, word ptr [esi + 0x10]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x4E
        __asm _emit 0x10
        // 0x5873AA75: movzx edx, word ptr [ebp + 0x2ce]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x95
        __asm _emit 0xCE
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873AA7C: add ecx, 0x64
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x64
        // 0x5873AA7F: imul ecx, edx
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xCA
        // 0x5873AA82: mov eax, 0x51eb851f
        __asm _emit 0xB8
        __asm _emit 0x1F
        __asm _emit 0x85
        __asm _emit 0xEB
        __asm _emit 0x51
        // 0x5873AA87: imul ecx
        __asm _emit 0xF7
        __asm _emit 0xE9
        // 0x5873AA89: sar edx, 5
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x05
        // 0x5873AA8C: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x5873AA8E: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x5873AA91: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x5873AA93: movzx edx, word ptr [ebp + 0x2d8]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x95
        __asm _emit 0xD8
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873AA9A: mov word ptr [ebp + 0x2ce], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0xCE
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873AAA1: movzx ecx, word ptr [esi + 0x10]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x4E
        __asm _emit 0x10
        // 0x5873AAA5: add ecx, 0x64
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x64
        // 0x5873AAA8: imul ecx, edx
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xCA
        // 0x5873AAAB: mov eax, 0x51eb851f
        __asm _emit 0xB8
        __asm _emit 0x1F
        __asm _emit 0x85
        __asm _emit 0xEB
        __asm _emit 0x51
        // 0x5873AAB0: imul ecx
        __asm _emit 0xF7
        __asm _emit 0xE9
        // 0x5873AAB2: sar edx, 5
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x05
        // 0x5873AAB5: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x5873AAB7: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x5873AABA: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x5873AABC: mov word ptr [ebp + 0x2d8], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0xD8
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873AAC3: movzx ecx, word ptr [esi + 0x10]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x4E
        __asm _emit 0x10
        // 0x5873AAC7: mov dword ptr [ebp + 0x4c4], ecx
        __asm _emit 0x89
        __asm _emit 0x8D
        __asm _emit 0xC4
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873AACD: movzx ecx, word ptr [ebp + 0x2e2]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x8D
        __asm _emit 0xE2
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873AAD4: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x5873AAD6: mov word ptr [ebp + 0x2d6], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x95
        __asm _emit 0xD6
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873AADD: lea edx, [ecx + ecx*2]
        __asm _emit 0x8D
        __asm _emit 0x14
        __asm _emit 0x49
        // 0x5873AAE0: mov eax, 0x66666667
        __asm _emit 0xB8
        __asm _emit 0x67
        __asm _emit 0x66
        __asm _emit 0x66
        __asm _emit 0x66
        // 0x5873AAE5: imul edx
        __asm _emit 0xF7
        __asm _emit 0xEA
        // 0x5873AAE7: sar edx, 2
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x02
        // 0x5873AAEA: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x5873AAEC: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x5873AAEF: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x5873AAF1: mov edx, ecx
        __asm _emit 0x8B
        __asm _emit 0xD1
        // 0x5873AAF3: imul edx, edx, 0x102
        __asm _emit 0x69
        __asm _emit 0xD2
        __asm _emit 0x02
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873AAF9: mov dword ptr [ebp + 0xb0], eax
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0xB0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873AAFF: mov eax, 0x10624dd3
        __asm _emit 0xB8
        __asm _emit 0xD3
        __asm _emit 0x4D
        __asm _emit 0x62
        __asm _emit 0x10
        // 0x5873AB04: imul edx
        __asm _emit 0xF7
        __asm _emit 0xEA
        // 0x5873AB06: sar edx, 6
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x06
        // 0x5873AB09: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x5873AB0B: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x5873AB0E: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x5873AB10: mov dword ptr [ebp + 0xb4], eax
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0xB4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873AB16: cmp di, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xFF
        __asm _emit 0x01
        // 0x5873AB1A: jne 0x5873ab32
        __asm _emit 0x75
        __asm _emit 0x16
        // 0x5873AB1C: lea ecx, [ecx + ecx*2]
        __asm _emit 0x8D
        __asm _emit 0x0C
        __asm _emit 0x49
        // 0x5873AB1F: add ecx, ecx
        __asm _emit 0x03
        __asm _emit 0xC9
        // 0x5873AB21: mov eax, 0x66666667
        __asm _emit 0xB8
        __asm _emit 0x67
        __asm _emit 0x66
        __asm _emit 0x66
        __asm _emit 0x66
        // 0x5873AB26: imul ecx
        __asm _emit 0xF7
        __asm _emit 0xE9
        // 0x5873AB28: sar edx, 2
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x02
        // 0x5873AB2B: mov ecx, edx
        __asm _emit 0x8B
        __asm _emit 0xCA
        // 0x5873AB2D: shr ecx, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE9
        __asm _emit 0x1F
        // 0x5873AB30: add ecx, edx
        __asm _emit 0x03
        __asm _emit 0xCA
        // 0x5873AB32: mov dword ptr [ebp + 0x54c], ecx
        __asm _emit 0x89
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873AB38: mov ecx, dword ptr [ebp + 0x514]
        __asm _emit 0x8B
        __asm _emit 0x8D
        __asm _emit 0x14
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873AB3E: push ebx
        __asm _emit 0x53
        // 0x5873AB3F: call 0x58907360
        __asm _emit 0xE8
        __asm _emit 0x1C
        __asm _emit 0xC8
        __asm _emit 0x1C
        __asm _emit 0x00
        // 0x5873AB44: mov edx, dword ptr [0x58a247f8]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0xF8
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5873AB4A: mov eax, dword ptr [edx + 4]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x04
        // 0x5873AB4D: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x5873AB4F: je 0x5873ab73
        __asm _emit 0x74
        __asm _emit 0x22
        // 0x5873AB51: mov ecx, dword ptr [ebp + 0x74]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0x74
        // 0x5873AB54: mov dl, byte ptr [eax + 0x354]
        __asm _emit 0x8A
        __asm _emit 0x90
        __asm _emit 0x54
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873AB5A: cmp dl, byte ptr [ecx + 0x354]
        __asm _emit 0x3A
        __asm _emit 0x91
        __asm _emit 0x54
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873AB60: je 0x5873ab73
        __asm _emit 0x74
        __asm _emit 0x11
        // 0x5873AB62: mov eax, dword ptr [ebp + 0x514]
        __asm _emit 0x8B
        __asm _emit 0x85
        __asm _emit 0x14
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873AB68: mov ecx, 0xfffe
        __asm _emit 0xB9
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873AB6D: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x5873AB71: jmp 0x5873abe5
        __asm _emit 0xEB
        __asm _emit 0x72
        // 0x5873AB73: mov eax, dword ptr [0x58a246a0]
        __asm _emit 0xA1
        __asm _emit 0xA0
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5873AB78: cmp dword ptr [eax + 0x160], 0x25
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x25
        // 0x5873AB7F: jle 0x5873ab96
        __asm _emit 0x7E
        __asm _emit 0x15
        // 0x5873AB81: cmp dword ptr [eax + 0x190], ebx
        __asm _emit 0x39
        __asm _emit 0x98
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873AB87: je 0x5873ab96
        __asm _emit 0x74
        __asm _emit 0x0D
        // 0x5873AB89: mov eax, dword ptr [eax + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873AB8F: add eax, 0x940
        __asm _emit 0x05
        __asm _emit 0x40
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873AB94: jmp 0x5873ab98
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5873AB96: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5873AB98: mov ecx, dword ptr [ebp + 0x504]
        __asm _emit 0x8B
        __asm _emit 0x8D
        __asm _emit 0x04
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873AB9E: mov dword ptr [ecx + 0x54], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x54
        // 0x5873ABA1: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x5873ABA3: je 0x5873abcd
        __asm _emit 0x74
        __asm _emit 0x28
        // 0x5873ABA5: mov edx, dword ptr [eax + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x18
        // 0x5873ABA8: mov dword ptr [ecx + 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x0C
        // 0x5873ABAB: mov edx, dword ptr [eax + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x1C
        // 0x5873ABAE: add eax, 0x20
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x20
        // 0x5873ABB1: mov dword ptr [ecx + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x10
        // 0x5873ABB4: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x5873ABB6: add ecx, 0x14
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x14
        // 0x5873ABB9: mov dword ptr [ecx], edx
        __asm _emit 0x89
        __asm _emit 0x11
        // 0x5873ABBB: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x5873ABBE: mov dword ptr [ecx + 4], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x04
        // 0x5873ABC1: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x5873ABC4: mov dword ptr [ecx + 8], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x08
        // 0x5873ABC7: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x0C
        // 0x5873ABCA: mov dword ptr [ecx + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x0C
        // 0x5873ABCD: mov eax, dword ptr [ebp + 0x504]
        __asm _emit 0x8B
        __asm _emit 0x85
        __asm _emit 0x04
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873ABD3: mov ecx, dword ptr [esp + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x5873ABD7: mov dword ptr [eax + 0x50], ecx
        __asm _emit 0x89
        __asm _emit 0x48
        __asm _emit 0x50
        // 0x5873ABDA: mov eax, dword ptr [ebp + 0x514]
        __asm _emit 0x8B
        __asm _emit 0x85
        __asm _emit 0x14
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873ABE0: or word ptr [eax + 0x24], 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x48
        __asm _emit 0x24
        __asm _emit 0x01
        // 0x5873ABE5: movzx eax, word ptr [ebp + 0x238]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x85
        __asm _emit 0x38
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873ABEC: mov ecx, dword ptr [0x58a24648]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x48
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5873ABF2: cmp dword ptr [ecx + 0x160], eax
        __asm _emit 0x39
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873ABF8: jle 0x5873ac11
        __asm _emit 0x7E
        __asm _emit 0x17
        // 0x5873ABFA: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x5873ABFC: jl 0x5873ac11
        __asm _emit 0x7C
        __asm _emit 0x13
        // 0x5873ABFE: cmp dword ptr [ecx + 0x190], ebx
        __asm _emit 0x39
        __asm _emit 0x99
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873AC04: je 0x5873ac11
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x5873AC06: shl eax, 6
        __asm _emit 0xC1
        __asm _emit 0xE0
        __asm _emit 0x06
        // 0x5873AC09: add eax, dword ptr [ecx + 0x190]
        __asm _emit 0x03
        __asm _emit 0x81
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873AC0F: jmp 0x5873ac13
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5873AC11: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5873AC13: mov ecx, dword ptr [ebp + 0x4fc]
        __asm _emit 0x8B
        __asm _emit 0x8D
        __asm _emit 0xFC
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873AC19: mov dword ptr [ecx + 0x54], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x54
        // 0x5873AC1C: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x5873AC1E: je 0x5873ac48
        __asm _emit 0x74
        __asm _emit 0x28
        // 0x5873AC20: mov edx, dword ptr [eax + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x18
        // 0x5873AC23: mov dword ptr [ecx + 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x0C
        // 0x5873AC26: mov edx, dword ptr [eax + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x1C
        // 0x5873AC29: add eax, 0x20
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x20
        // 0x5873AC2C: mov dword ptr [ecx + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x10
        // 0x5873AC2F: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x5873AC31: add ecx, 0x14
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x14
        // 0x5873AC34: mov dword ptr [ecx], edx
        __asm _emit 0x89
        __asm _emit 0x11
        // 0x5873AC36: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x5873AC39: mov dword ptr [ecx + 4], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x04
        // 0x5873AC3C: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x5873AC3F: mov dword ptr [ecx + 8], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x08
        // 0x5873AC42: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x0C
        // 0x5873AC45: mov dword ptr [ecx + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x0C
        // 0x5873AC48: movzx eax, word ptr [ebp + 0x238]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x85
        __asm _emit 0x38
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873AC4F: mov ecx, dword ptr [0x58a24648]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x48
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5873AC55: inc eax
        __asm _emit 0x40
        // 0x5873AC56: cmp dword ptr [ecx + 0x160], eax
        __asm _emit 0x39
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873AC5C: jle 0x5873ac75
        __asm _emit 0x7E
        __asm _emit 0x17
        // 0x5873AC5E: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x5873AC60: jl 0x5873ac75
        __asm _emit 0x7C
        __asm _emit 0x13
        // 0x5873AC62: cmp dword ptr [ecx + 0x190], ebx
        __asm _emit 0x39
        __asm _emit 0x99
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873AC68: je 0x5873ac75
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x5873AC6A: shl eax, 6
        __asm _emit 0xC1
        __asm _emit 0xE0
        __asm _emit 0x06
        // 0x5873AC6D: add eax, dword ptr [ecx + 0x190]
        __asm _emit 0x03
        __asm _emit 0x81
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873AC73: jmp 0x5873ac77
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5873AC75: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5873AC77: mov ecx, dword ptr [ebp + 0x500]
        __asm _emit 0x8B
        __asm _emit 0x8D
        __asm _emit 0x00
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873AC7D: mov dword ptr [ecx + 0x54], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x54
        // 0x5873AC80: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x5873AC82: je 0x5873acac
        __asm _emit 0x74
        __asm _emit 0x28
        // 0x5873AC84: mov edx, dword ptr [eax + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x18
        // 0x5873AC87: mov dword ptr [ecx + 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x0C
        // 0x5873AC8A: mov edx, dword ptr [eax + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x1C
        // 0x5873AC8D: add eax, 0x20
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x20
        // 0x5873AC90: mov dword ptr [ecx + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x10
        // 0x5873AC93: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x5873AC95: add ecx, 0x14
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x14
        // 0x5873AC98: mov dword ptr [ecx], edx
        __asm _emit 0x89
        __asm _emit 0x11
        // 0x5873AC9A: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x5873AC9D: mov dword ptr [ecx + 4], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x04
        // 0x5873ACA0: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x5873ACA3: mov dword ptr [ecx + 8], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x08
        // 0x5873ACA6: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x0C
        // 0x5873ACA9: mov dword ptr [ecx + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x0C
        // 0x5873ACAC: movzx eax, word ptr [ebp + 0x238]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x85
        __asm _emit 0x38
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873ACB3: mov ecx, dword ptr [0x58a24648]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x48
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5873ACB9: add eax, 6
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x06
        // 0x5873ACBC: cmp dword ptr [ecx + 0x160], eax
        __asm _emit 0x39
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873ACC2: jle 0x5873acdb
        __asm _emit 0x7E
        __asm _emit 0x17
        // 0x5873ACC4: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x5873ACC6: jl 0x5873acdb
        __asm _emit 0x7C
        __asm _emit 0x13
        // 0x5873ACC8: cmp dword ptr [ecx + 0x190], ebx
        __asm _emit 0x39
        __asm _emit 0x99
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873ACCE: je 0x5873acdb
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x5873ACD0: shl eax, 6
        __asm _emit 0xC1
        __asm _emit 0xE0
        __asm _emit 0x06
        // 0x5873ACD3: add eax, dword ptr [ecx + 0x190]
        __asm _emit 0x03
        __asm _emit 0x81
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873ACD9: jmp 0x5873acdd
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5873ACDB: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5873ACDD: mov ecx, dword ptr [ebp + 0x50c]
        __asm _emit 0x8B
        __asm _emit 0x8D
        __asm _emit 0x0C
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873ACE3: mov dword ptr [ecx + 0x54], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x54
        // 0x5873ACE6: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x5873ACE8: je 0x5873ad12
        __asm _emit 0x74
        __asm _emit 0x28
        // 0x5873ACEA: mov edx, dword ptr [eax + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x18
        // 0x5873ACED: mov dword ptr [ecx + 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x0C
        // 0x5873ACF0: mov edx, dword ptr [eax + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x1C
        // 0x5873ACF3: add eax, 0x20
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x20
        // 0x5873ACF6: mov dword ptr [ecx + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x10
        // 0x5873ACF9: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x5873ACFB: add ecx, 0x14
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x14
        // 0x5873ACFE: mov dword ptr [ecx], edx
        __asm _emit 0x89
        __asm _emit 0x11
        // 0x5873AD00: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x5873AD03: mov dword ptr [ecx + 4], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x04
        // 0x5873AD06: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x5873AD09: mov dword ptr [ecx + 8], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x08
        // 0x5873AD0C: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x0C
        // 0x5873AD0F: mov dword ptr [ecx + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x0C
        // 0x5873AD12: mov ax, word ptr [ebp + 0x2de]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x85
        __asm _emit 0xDE
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873AD19: movzx edx, word ptr [ebp + 0x2d2]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x95
        __asm _emit 0xD2
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873AD20: imul ax, ax, 0xf
        __asm _emit 0x66
        __asm _emit 0x6B
        __asm _emit 0xC0
        __asm _emit 0x0F
        // 0x5873AD24: mov word ptr [ebp + 0x2de], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0xDE
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873AD2B: movzx ecx, ax
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0xC8
        // 0x5873AD2E: mov eax, dword ptr [esp + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x5873AD32: mov dword ptr [ebp + 0x34c], eax
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0x4C
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873AD38: mov eax, dword ptr [ebp + 0x74]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x74
        // 0x5873AD3B: mov dword ptr [ebp + 0x230], ecx
        __asm _emit 0x89
        __asm _emit 0x8D
        __asm _emit 0x30
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873AD41: mov dword ptr [ebp + 0x4c0], edx
        __asm _emit 0x89
        __asm _emit 0x95
        __asm _emit 0xC0
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873AD47: mov ecx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x04
        // 0x5873AD4A: mov dword ptr [ebp + 4], ecx
        __asm _emit 0x89
        __asm _emit 0x4D
        __asm _emit 0x04
        // 0x5873AD4D: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x5873AD50: mov eax, dword ptr [ebp + 0x338]
        __asm _emit 0x8B
        __asm _emit 0x85
        __asm _emit 0x38
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873AD56: mov ecx, dword ptr [ebp + 0x520]
        __asm _emit 0x8B
        __asm _emit 0x8D
        __asm _emit 0x20
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873AD5C: imul eax, eax, 0x3e8
        __asm _emit 0x69
        __asm _emit 0xC0
        __asm _emit 0xE8
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873AD62: or esi, 0xffffffff
        __asm _emit 0x83
        __asm _emit 0xCE
        __asm _emit 0xFF
        // 0x5873AD65: mov dword ptr [ebp + 8], edx
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0x08
        // 0x5873AD68: mov dword ptr [ebp + 0x4d8], ebx
        __asm _emit 0x89
        __asm _emit 0x9D
        __asm _emit 0xD8
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873AD6E: mov dword ptr [ebp + 0x4dc], esi
        __asm _emit 0x89
        __asm _emit 0xB5
        __asm _emit 0xDC
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873AD74: mov dword ptr [ebp + 0x4e0], ebx
        __asm _emit 0x89
        __asm _emit 0x9D
        __asm _emit 0xE0
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873AD7A: mov dword ptr [ebp + 0x4e4], esi
        __asm _emit 0x89
        __asm _emit 0xB5
        __asm _emit 0xE4
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873AD80: mov dword ptr [ebp + 0x460], ebx
        __asm _emit 0x89
        __asm _emit 0x9D
        __asm _emit 0x60
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873AD86: mov dword ptr [ebp + 0x46c], ebx
        __asm _emit 0x89
        __asm _emit 0x9D
        __asm _emit 0x6C
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873AD8C: mov dword ptr [ebp + 0x474], ebx
        __asm _emit 0x89
        __asm _emit 0x9D
        __asm _emit 0x74
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873AD92: mov dword ptr [ebp + 0x350], ebx
        __asm _emit 0x89
        __asm _emit 0x9D
        __asm _emit 0x50
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873AD98: mov dword ptr [ebp + 0x328], ebx
        __asm _emit 0x89
        __asm _emit 0x9D
        __asm _emit 0x28
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873AD9E: mov dword ptr [ebp + 0x31c], ebx
        __asm _emit 0x89
        __asm _emit 0x9D
        __asm _emit 0x1C
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873ADA4: mov dword ptr [ebp + 0x318], ebx
        __asm _emit 0x89
        __asm _emit 0x9D
        __asm _emit 0x18
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873ADAA: mov dword ptr [ebp + 0x340], eax
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0x40
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873ADB0: mov dword ptr [ebp + 0x324], eax
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0x24
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873ADB6: mov dword ptr [ebp + 0x4ec], ebx
        __asm _emit 0x89
        __asm _emit 0x9D
        __asm _emit 0xEC
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873ADBC: mov dword ptr [ebp + 0x4d4], 0xa
        __asm _emit 0xC7
        __asm _emit 0x85
        __asm _emit 0xD4
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873ADC6: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x5873ADC8: je 0x5873adda
        __asm _emit 0x74
        __asm _emit 0x10
        // 0x5873ADCA: mov eax, dword ptr [0x58a248f8]
        __asm _emit 0xA1
        __asm _emit 0xF8
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5873ADCF: push eax
        __asm _emit 0x50
        // 0x5873ADD0: mov eax, dword ptr [ebp + 4]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x04
        // 0x5873ADD3: push edx
        __asm _emit 0x52
        // 0x5873ADD4: push eax
        __asm _emit 0x50
        // 0x5873ADD5: call 0x587b7500
        __asm _emit 0xE8
        __asm _emit 0x26
        __asm _emit 0xC7
        __asm _emit 0x07
        __asm _emit 0x00
        // 0x5873ADDA: cmp byte ptr [ebp + 0x9c], 1
        __asm _emit 0x80
        __asm _emit 0xBD
        __asm _emit 0x9C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        // 0x5873ADE1: jne 0x5873ae78
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x91
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873ADE7: mov ecx, dword ptr [ebp + 0x520]
        __asm _emit 0x8B
        __asm _emit 0x8D
        __asm _emit 0x20
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873ADED: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x5873ADEF: je 0x5873ae10
        __asm _emit 0x74
        __asm _emit 0x1F
        // 0x5873ADF1: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x5873ADF3: mov eax, dword ptr [edx + 8]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x08
        // 0x5873ADF6: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x5873ADF8: mov ecx, dword ptr [ebp + 0x520]
        __asm _emit 0x8B
        __asm _emit 0x8D
        __asm _emit 0x20
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873ADFE: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x5873AE00: je 0x5873ae10
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x5873AE02: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x5873AE04: mov eax, dword ptr [edx]
        __asm _emit 0x8B
        __asm _emit 0x02
        // 0x5873AE06: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x5873AE08: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x5873AE0A: mov dword ptr [ebp + 0x520], ebx
        __asm _emit 0x89
        __asm _emit 0x9D
        __asm _emit 0x20
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873AE10: cmp dword ptr [0x589c9048], ebx
        __asm _emit 0x39
        __asm _emit 0x1D
        __asm _emit 0x48
        __asm _emit 0x90
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x5873AE16: je 0x5873ae78
        __asm _emit 0x74
        __asm _emit 0x60
        // 0x5873AE18: push 0x20
        __asm _emit 0x6A
        __asm _emit 0x20
        // 0x5873AE1A: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x2F
        __asm _emit 0x1E
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x5873AE1F: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5873AE22: mov dword ptr [esp + 0x38], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x5873AE26: mov dword ptr [esp + 0x20], ebx
        __asm _emit 0x89
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x5873AE2A: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x5873AE2C: je 0x5873ae6c
        __asm _emit 0x74
        __asm _emit 0x3E
        // 0x5873AE2E: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5873AE34: mov edx, dword ptr [ecx + 0x21c4c]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0x4C
        __asm _emit 0x1C
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x5873AE3A: mov edx, dword ptr [edx + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x52
        __asm _emit 0x10
        // 0x5873AE3D: cmp dword ptr [edx + 0x170], 0x26
        __asm _emit 0x83
        __asm _emit 0xBA
        __asm _emit 0x70
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x26
        // 0x5873AE44: jle 0x5873ae60
        __asm _emit 0x7E
        __asm _emit 0x1A
        // 0x5873AE46: mov edx, dword ptr [edx + 0x194]
        __asm _emit 0x8B
        __asm _emit 0x92
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873AE4C: cmp edx, ebx
        __asm _emit 0x3B
        __asm _emit 0xD3
        // 0x5873AE4E: je 0x5873ae60
        __asm _emit 0x74
        __asm _emit 0x10
        // 0x5873AE50: mov edx, dword ptr [edx + 0x98]
        __asm _emit 0x8B
        __asm _emit 0x92
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873AE56: push edx
        __asm _emit 0x52
        // 0x5873AE57: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5873AE59: call 0x587b7350
        __asm _emit 0xE8
        __asm _emit 0xF2
        __asm _emit 0xC4
        __asm _emit 0x07
        __asm _emit 0x00
        // 0x5873AE5E: jmp 0x5873ae6e
        __asm _emit 0xEB
        __asm _emit 0x0E
        // 0x5873AE60: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x5873AE62: push edx
        __asm _emit 0x52
        // 0x5873AE63: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5873AE65: call 0x587b7350
        __asm _emit 0xE8
        __asm _emit 0xE6
        __asm _emit 0xC4
        __asm _emit 0x07
        __asm _emit 0x00
        // 0x5873AE6A: jmp 0x5873ae6e
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5873AE6C: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5873AE6E: mov dword ptr [esp + 0x20], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x5873AE72: mov dword ptr [ebp + 0x520], eax
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0x20
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873AE78: mov ecx, dword ptr [ebp + 0x520]
        __asm _emit 0x8B
        __asm _emit 0x8D
        __asm _emit 0x20
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873AE7E: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x5873AE80: je 0x5873aeb5
        __asm _emit 0x74
        __asm _emit 0x33
        // 0x5873AE82: mov edx, dword ptr [0x58a248f8]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0xF8
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5873AE88: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5873AE8A: lea ebx, [ebx]
        __asm _emit 0x8D
        __asm _emit 0x9B
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873AE90: mov esi, eax
        __asm _emit 0x8B
        __asm _emit 0xF0
        // 0x5873AE92: imul esi, eax
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xF0
        // 0x5873AE95: cmp edx, esi
        __asm _emit 0x3B
        __asm _emit 0xD6
        // 0x5873AE97: je 0x5873aea1
        __asm _emit 0x74
        __asm _emit 0x08
        // 0x5873AE99: inc eax
        __asm _emit 0x40
        // 0x5873AE9A: cmp eax, 6
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x06
        // 0x5873AE9D: jl 0x5873ae90
        __asm _emit 0x7C
        __asm _emit 0xF1
        // 0x5873AE9F: jmp 0x5873aea7
        __asm _emit 0xEB
        __asm _emit 0x06
        // 0x5873AEA1: lea edx, [eax + 2]
        __asm _emit 0x8D
        __asm _emit 0x50
        __asm _emit 0x02
        // 0x5873AEA4: imul edx, edx
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xD2
        // 0x5873AEA7: mov eax, dword ptr [ebp + 4]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x04
        // 0x5873AEAA: push edx
        __asm _emit 0x52
        // 0x5873AEAB: mov edx, dword ptr [ebp + 8]
        __asm _emit 0x8B
        __asm _emit 0x55
        __asm _emit 0x08
        // 0x5873AEAE: push edx
        __asm _emit 0x52
        // 0x5873AEAF: push eax
        __asm _emit 0x50
        // 0x5873AEB0: call 0x587b7500
        __asm _emit 0xE8
        __asm _emit 0x4B
        __asm _emit 0xC6
        __asm _emit 0x07
        __asm _emit 0x00
        // 0x5873AEB5: movzx ecx, word ptr [ebp + 0x2e2]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x8D
        __asm _emit 0xE2
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873AEBC: mov eax, 0x51eb851f
        __asm _emit 0xB8
        __asm _emit 0x1F
        __asm _emit 0x85
        __asm _emit 0xEB
        __asm _emit 0x51
        // 0x5873AEC1: imul ecx
        __asm _emit 0xF7
        __asm _emit 0xE9
        // 0x5873AEC3: sar edx, 5
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x05
        // 0x5873AEC6: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x5873AEC8: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x5873AECB: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x5873AECD: add eax, eax
        __asm _emit 0x03
        __asm _emit 0xC0
        // 0x5873AECF: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5873AED1: imul ecx, eax
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xC8
        // 0x5873AED4: push ecx
        __asm _emit 0x51
        // 0x5873AED5: mov dword ptr [ebp + 0xa4], eax
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0xA4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873AEDB: call 0x5897152e
        __asm _emit 0xE8
        __asm _emit 0x4E
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0x00
        // 0x5873AEE0: mov ecx, dword ptr [ebp + 0xa4]
        __asm _emit 0x8B
        __asm _emit 0x8D
        __asm _emit 0xA4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873AEE6: mov edx, ecx
        __asm _emit 0x8B
        __asm _emit 0xD1
        // 0x5873AEE8: imul edx, ecx
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xD1
        // 0x5873AEEB: push edx
        __asm _emit 0x52
        // 0x5873AEEC: push ebx
        __asm _emit 0x53
        // 0x5873AEED: push eax
        __asm _emit 0x50
        // 0x5873AEEE: mov dword ptr [ebp + 0xa0], eax
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0xA0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873AEF4: call 0x5897cc48
        __asm _emit 0xE8
        __asm _emit 0x4F
        __asm _emit 0x1D
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x5873AEF9: mov eax, dword ptr [ebp + 0xa4]
        __asm _emit 0x8B
        __asm _emit 0x85
        __asm _emit 0xA4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873AEFF: push 2
        __asm _emit 0x6A
        __asm _emit 0x02
        // 0x5873AF01: push eax
        __asm _emit 0x50
        // 0x5873AF02: push eax
        __asm _emit 0x50
        // 0x5873AF03: mov eax, dword ptr [ebp + 0xa0]
        __asm _emit 0x8B
        __asm _emit 0x85
        __asm _emit 0xA0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873AF09: push eax
        __asm _emit 0x50
        // 0x5873AF0A: call 0x5876c7e0
        __asm _emit 0xE8
        __asm _emit 0xD1
        __asm _emit 0x18
        __asm _emit 0x03
        __asm _emit 0x00
        // 0x5873AF0F: mov eax, dword ptr [ebp + 0xa4]
        __asm _emit 0x8B
        __asm _emit 0x85
        __asm _emit 0xA4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873AF15: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5873AF17: imul ecx, eax
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xC8
        // 0x5873AF1A: push ecx
        __asm _emit 0x51
        // 0x5873AF1B: call 0x5897152e
        __asm _emit 0xE8
        __asm _emit 0x0E
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0x00
        // 0x5873AF20: mov ecx, dword ptr [ebp + 0xa4]
        __asm _emit 0x8B
        __asm _emit 0x8D
        __asm _emit 0xA4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873AF26: mov edx, ecx
        __asm _emit 0x8B
        __asm _emit 0xD1
        // 0x5873AF28: imul edx, ecx
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xD1
        // 0x5873AF2B: push edx
        __asm _emit 0x52
        // 0x5873AF2C: push ebx
        __asm _emit 0x53
        // 0x5873AF2D: push eax
        __asm _emit 0x50
        // 0x5873AF2E: mov dword ptr [ebp + 0xb8], eax
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0xB8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873AF34: call 0x5897cc48
        __asm _emit 0xE8
        __asm _emit 0x0F
        __asm _emit 0x1D
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x5873AF39: movzx eax, word ptr [ebp + 0x2e2]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x85
        __asm _emit 0xE2
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873AF40: lea ecx, [eax + eax*2]
        __asm _emit 0x8D
        __asm _emit 0x0C
        __asm _emit 0x40
        // 0x5873AF43: mov eax, 0x66666667
        __asm _emit 0xB8
        __asm _emit 0x67
        __asm _emit 0x66
        __asm _emit 0x66
        __asm _emit 0x66
        // 0x5873AF48: imul ecx
        __asm _emit 0xF7
        __asm _emit 0xE9
        // 0x5873AF4A: sar edx, 2
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x02
        // 0x5873AF4D: mov ecx, edx
        __asm _emit 0x8B
        __asm _emit 0xCA
        // 0x5873AF4F: shr ecx, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE9
        __asm _emit 0x1F
        // 0x5873AF52: add ecx, edx
        __asm _emit 0x03
        __asm _emit 0xCA
        // 0x5873AF54: mov eax, 0x51eb851f
        __asm _emit 0xB8
        __asm _emit 0x1F
        __asm _emit 0x85
        __asm _emit 0xEB
        __asm _emit 0x51
        // 0x5873AF59: imul ecx
        __asm _emit 0xF7
        __asm _emit 0xE9
        // 0x5873AF5B: sar edx, 5
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x05
        // 0x5873AF5E: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x5873AF60: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x5873AF63: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x5873AF65: add eax, eax
        __asm _emit 0x03
        __asm _emit 0xC0
        // 0x5873AF67: mov dword ptr [ebp + 0xac], eax
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873AF6D: mov eax, dword ptr [ebp + 0xa4]
        __asm _emit 0x8B
        __asm _emit 0x85
        __asm _emit 0xA4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873AF73: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5873AF75: imul ecx, eax
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xC8
        // 0x5873AF78: push ecx
        __asm _emit 0x51
        // 0x5873AF79: call 0x5897152e
        __asm _emit 0xE8
        __asm _emit 0xB0
        __asm _emit 0x65
        __asm _emit 0x23
        __asm _emit 0x00
        // 0x5873AF7E: mov ecx, dword ptr [ebp + 0xa4]
        __asm _emit 0x8B
        __asm _emit 0x8D
        __asm _emit 0xA4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873AF84: mov edx, ecx
        __asm _emit 0x8B
        __asm _emit 0xD1
        // 0x5873AF86: imul edx, ecx
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xD1
        // 0x5873AF89: mov ecx, dword ptr [ebp + 0xa0]
        __asm _emit 0x8B
        __asm _emit 0x8D
        __asm _emit 0xA0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873AF8F: push edx
        __asm _emit 0x52
        // 0x5873AF90: push ecx
        __asm _emit 0x51
        // 0x5873AF91: push eax
        __asm _emit 0x50
        // 0x5873AF92: mov dword ptr [ebp + 0xa8], eax
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0xA8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873AF98: call 0x5897cd4c
        __asm _emit 0xE8
        __asm _emit 0xAF
        __asm _emit 0x1D
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x5873AF9D: mov edx, dword ptr [ebp + 0xac]
        __asm _emit 0x8B
        __asm _emit 0x95
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873AFA3: mov eax, dword ptr [ebp + 0xa4]
        __asm _emit 0x8B
        __asm _emit 0x85
        __asm _emit 0xA4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873AFA9: mov ecx, dword ptr [ebp + 0xa8]
        __asm _emit 0x8B
        __asm _emit 0x8D
        __asm _emit 0xA8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873AFAF: add esp, 0x40
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x40
        // 0x5873AFB2: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x5873AFB4: push edx
        __asm _emit 0x52
        // 0x5873AFB5: push eax
        __asm _emit 0x50
        // 0x5873AFB6: push ecx
        __asm _emit 0x51
        // 0x5873AFB7: call 0x5876c7e0
        __asm _emit 0xE8
        __asm _emit 0x24
        __asm _emit 0x18
        __asm _emit 0x03
        __asm _emit 0x00
        // 0x5873AFBC: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x5873AFBF: movzx eax, word ptr [ebp + 0x2cc]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x85
        __asm _emit 0xCC
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873AFC6: cmp ax, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x01
        // 0x5873AFCA: jne 0x5873afe4
        __asm _emit 0x75
        __asm _emit 0x18
        // 0x5873AFCC: mov edx, dword ptr [0x58a248e4]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0xE4
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5873AFD2: mov dword ptr [ebp + 0x558], edx
        __asm _emit 0x89
        __asm _emit 0x95
        __asm _emit 0x58
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873AFD8: mov dword ptr [ebp + 0x55c], 3
        __asm _emit 0xC7
        __asm _emit 0x85
        __asm _emit 0x5C
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873AFE2: jmp 0x5873b02a
        __asm _emit 0xEB
        __asm _emit 0x46
        // 0x5873AFE4: cmp ax, 2
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x02
        // 0x5873AFE8: jne 0x5873affb
        __asm _emit 0x75
        __asm _emit 0x11
        // 0x5873AFEA: mov eax, dword ptr [0x58a248e0]
        __asm _emit 0xA1
        __asm _emit 0xE0
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5873AFEF: mov dword ptr [ebp + 0x55c], 3
        __asm _emit 0xC7
        __asm _emit 0x85
        __asm _emit 0x5C
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873AFF9: jmp 0x5873b024
        __asm _emit 0xEB
        __asm _emit 0x29
        // 0x5873AFFB: mov ecx, 3
        __asm _emit 0xB9
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873B000: cmp ax, cx
        __asm _emit 0x66
        __asm _emit 0x3B
        __asm _emit 0xC1
        // 0x5873B003: jne 0x5873b019
        __asm _emit 0x75
        __asm _emit 0x14
        // 0x5873B005: mov edx, dword ptr [0x58a248ec]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0xEC
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5873B00B: mov dword ptr [ebp + 0x558], edx
        __asm _emit 0x89
        __asm _emit 0x95
        __asm _emit 0x58
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873B011: mov dword ptr [ebp + 0x55c], ecx
        __asm _emit 0x89
        __asm _emit 0x8D
        __asm _emit 0x5C
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873B017: jmp 0x5873b02a
        __asm _emit 0xEB
        __asm _emit 0x11
        // 0x5873B019: mov eax, dword ptr [0x58a248e8]
        __asm _emit 0xA1
        __asm _emit 0xE8
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5873B01E: mov dword ptr [ebp + 0x55c], ecx
        __asm _emit 0x89
        __asm _emit 0x8D
        __asm _emit 0x5C
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873B024: mov dword ptr [ebp + 0x558], eax
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0x58
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873B02A: mov ecx, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x5873B02E: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873B035: pop ecx
        __asm _emit 0x59
        // 0x5873B036: pop edi
        __asm _emit 0x5F
        // 0x5873B037: pop esi
        __asm _emit 0x5E
        // 0x5873B038: pop ebp
        __asm _emit 0x5D
        // 0x5873B039: pop ebx
        __asm _emit 0x5B
        // 0x5873B03A: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x5873B03D: ret 0x14
        __asm _emit 0xC2
        __asm _emit 0x14
        __asm _emit 0x00
    }
}
