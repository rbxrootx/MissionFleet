// Instruction stream reconstructed from Ghidra and the pinned mapped Core.dll.
// Ghidra extent: 0x5885C860 .. +0x11D bytes.
extern "C" __declspec(naked) void FUN_5885c860() {
    __asm {
        // 0x5885C860: mov edi, edi
        __asm _emit 0x8B
        __asm _emit 0xFF
        // 0x5885C862: push ebp
        __asm _emit 0x55
        // 0x5885C863: mov ebp, esp
        __asm _emit 0x8B
        __asm _emit 0xEC
        // 0x5885C865: mov eax, dword ptr [ebp + 8]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x08
        // 0x5885C868: push esi
        __asm _emit 0x56
        // 0x5885C869: push edi
        __asm _emit 0x57
        // 0x5885C86A: cmp eax, 9
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x09
        // 0x5885C86D: ja 0x5885c92f
        __asm _emit 0x0F
        __asm _emit 0x87
        __asm _emit 0xBC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885C873: jmp dword ptr [eax*4 + 0x5885c980]
        __asm _emit 0xFF
        __asm _emit 0x24
        __asm _emit 0x85
        __asm _emit 0x80
        __asm _emit 0xC9
        __asm _emit 0x85
        __asm _emit 0x58
        // 0x5885C87A: push dword ptr [ebp + 0x10]
        __asm _emit 0xFF
        __asm _emit 0x75
        __asm _emit 0x10
        // 0x5885C87D: push dword ptr [ebp + 0xc]
        __asm _emit 0xFF
        __asm _emit 0x75
        __asm _emit 0x0C
        // 0x5885C880: call 0x5885b84e
        __asm _emit 0xE8
        __asm _emit 0xC9
        __asm _emit 0xEF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5885C885: pop ecx
        __asm _emit 0x59
        // 0x5885C886: pop ecx
        __asm _emit 0x59
        // 0x5885C887: jmp 0x5885c932
        __asm _emit 0xE9
        __asm _emit 0xA6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885C88C: push dword ptr [ebp + 0x10]
        __asm _emit 0xFF
        __asm _emit 0x75
        __asm _emit 0x10
        // 0x5885C88F: push dword ptr [ebp + 0xc]
        __asm _emit 0xFF
        __asm _emit 0x75
        __asm _emit 0x0C
        // 0x5885C892: call 0x5885b890
        __asm _emit 0xE8
        __asm _emit 0xF9
        __asm _emit 0xEF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5885C897: jmp 0x5885c885
        __asm _emit 0xEB
        __asm _emit 0xEC
        // 0x5885C899: mov eax, dword ptr [ebp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x0C
        // 0x5885C89C: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x5885C89E: mov edx, 0x80000000
        __asm _emit 0xBA
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x80
        // 0x5885C8A3: cmp byte ptr [eax + 0x308], cl
        __asm _emit 0x38
        __asm _emit 0x88
        __asm _emit 0x08
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885C8A9: mov eax, dword ptr [ebp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x10
        // 0x5885C8AC: cmovne ecx, edx
        __asm _emit 0x0F
        __asm _emit 0x45
        __asm _emit 0xCA
        // 0x5885C8AF: mov dword ptr [eax], ecx
        __asm _emit 0x89
        __asm _emit 0x08
        // 0x5885C8B1: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5885C8B3: jmp 0x5885c932
        __asm _emit 0xEB
        __asm _emit 0x7D
        // 0x5885C8B5: mov eax, dword ptr [ebp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x0C
        // 0x5885C8B8: mov esi, 0x7f800000
        __asm _emit 0xBE
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x80
        __asm _emit 0x7F
        // 0x5885C8BD: mov ecx, dword ptr [ebp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0x10
        // 0x5885C8C0: mov edi, 0xff800000
        __asm _emit 0xBF
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x80
        __asm _emit 0xFF
        // 0x5885C8C5: mov edx, esi
        __asm _emit 0x8B
        __asm _emit 0xD6
        // 0x5885C8C7: cmp byte ptr [eax + 0x308], 0
        __asm _emit 0x80
        __asm _emit 0xB8
        __asm _emit 0x08
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885C8CE: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x5885C8D0: cmovne edx, edi
        __asm _emit 0x0F
        __asm _emit 0x45
        __asm _emit 0xD7
        // 0x5885C8D3: and eax, esi
        __asm _emit 0x23
        __asm _emit 0xC6
        // 0x5885C8D5: or edx, eax
        __asm _emit 0x0B
        __asm _emit 0xD0
        // 0x5885C8D7: and edx, edi
        __asm _emit 0x23
        __asm _emit 0xD7
        // 0x5885C8D9: mov dword ptr [ecx], edx
        __asm _emit 0x89
        __asm _emit 0x11
        // 0x5885C8DB: jmp 0x5885c8b1
        __asm _emit 0xEB
        __asm _emit 0xD4
        // 0x5885C8DD: mov eax, dword ptr [ebp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x0C
        // 0x5885C8E0: or edx, 0xffffffff
        __asm _emit 0x83
        __asm _emit 0xCA
        __asm _emit 0xFF
        // 0x5885C8E3: mov ecx, 0x7fffffff
        __asm _emit 0xB9
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0x7F
        // 0x5885C8E8: cmp byte ptr [eax + 0x308], 0
        __asm _emit 0x80
        __asm _emit 0xB8
        __asm _emit 0x08
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885C8EF: jmp 0x5885c8a9
        __asm _emit 0xEB
        __asm _emit 0xB8
        // 0x5885C8F1: mov eax, dword ptr [ebp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x0C
        // 0x5885C8F4: mov esi, 0x7f800000
        __asm _emit 0xBE
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x80
        __asm _emit 0x7F
        // 0x5885C8F9: mov ecx, 0xff800000
        __asm _emit 0xB9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x80
        __asm _emit 0xFF
        // 0x5885C8FE: mov edx, esi
        __asm _emit 0x8B
        __asm _emit 0xD6
        // 0x5885C900: cmp byte ptr [eax + 0x308], 0
        __asm _emit 0x80
        __asm _emit 0xB8
        __asm _emit 0x08
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885C907: cmovne edx, ecx
        __asm _emit 0x0F
        __asm _emit 0x45
        __asm _emit 0xD1
        // 0x5885C90A: mov ecx, dword ptr [ebp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0x10
        // 0x5885C90D: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x5885C90F: and eax, esi
        __asm _emit 0x23
        __asm _emit 0xC6
        // 0x5885C911: or edx, eax
        __asm _emit 0x0B
        __asm _emit 0xD0
        // 0x5885C913: and edx, 0xff800001
        __asm _emit 0x81
        __asm _emit 0xE2
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x80
        __asm _emit 0xFF
        // 0x5885C919: or edx, 1
        __asm _emit 0x83
        __asm _emit 0xCA
        __asm _emit 0x01
        // 0x5885C91C: jmp 0x5885c8d9
        __asm _emit 0xEB
        __asm _emit 0xBB
        // 0x5885C91E: mov eax, dword ptr [ebp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x10
        // 0x5885C921: mov dword ptr [eax], 0xffc00000
        __asm _emit 0xC7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xC0
        __asm _emit 0xFF
        // 0x5885C927: jmp 0x5885c8b1
        __asm _emit 0xEB
        __asm _emit 0x88
        // 0x5885C929: mov eax, dword ptr [ebp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x10
        // 0x5885C92C: and dword ptr [eax], 0
        __asm _emit 0x83
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x5885C92F: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5885C931: inc eax
        __asm _emit 0x40
        // 0x5885C932: pop edi
        __asm _emit 0x5F
        // 0x5885C933: pop esi
        __asm _emit 0x5E
        // 0x5885C934: pop ebp
        __asm _emit 0x5D
        // 0x5885C935: ret
        __asm _emit 0xC3
        // 0x5885C936: mov eax, dword ptr [ebp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x0C
        // 0x5885C939: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x5885C93B: mov edx, 0x80000000
        __asm _emit 0xBA
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x80
        // 0x5885C940: push 2
        __asm _emit 0x6A
        __asm _emit 0x02
        // 0x5885C942: cmp byte ptr [eax + 0x308], cl
        __asm _emit 0x38
        __asm _emit 0x88
        __asm _emit 0x08
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885C948: mov eax, dword ptr [ebp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x10
        // 0x5885C94B: cmovne ecx, edx
        __asm _emit 0x0F
        __asm _emit 0x45
        __asm _emit 0xCA
        // 0x5885C94E: mov dword ptr [eax], ecx
        __asm _emit 0x89
        __asm _emit 0x08
        // 0x5885C950: pop eax
        __asm _emit 0x58
        // 0x5885C951: jmp 0x5885c932
        __asm _emit 0xEB
        __asm _emit 0xDF
        // 0x5885C953: mov eax, dword ptr [ebp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x0C
        // 0x5885C956: mov esi, 0x7f800000
        __asm _emit 0xBE
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x80
        __asm _emit 0x7F
        // 0x5885C95B: mov ecx, dword ptr [ebp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0x10
        // 0x5885C95E: mov edi, 0xff800000
        __asm _emit 0xBF
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x80
        __asm _emit 0xFF
        // 0x5885C963: mov edx, esi
        __asm _emit 0x8B
        __asm _emit 0xD6
        // 0x5885C965: push 3
        __asm _emit 0x6A
        __asm _emit 0x03
        // 0x5885C967: cmp byte ptr [eax + 0x308], 0
        __asm _emit 0x80
        __asm _emit 0xB8
        __asm _emit 0x08
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885C96E: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x5885C970: cmovne edx, edi
        __asm _emit 0x0F
        __asm _emit 0x45
        __asm _emit 0xD7
        // 0x5885C973: and eax, esi
        __asm _emit 0x23
        __asm _emit 0xC6
        // 0x5885C975: or edx, eax
        __asm _emit 0x0B
        __asm _emit 0xD0
        // 0x5885C977: and edx, edi
        __asm _emit 0x23
        __asm _emit 0xD7
        // 0x5885C979: mov dword ptr [ecx], edx
        __asm _emit 0x89
        __asm _emit 0x11
        // 0x5885C97B: jmp 0x5885c950
        __asm _emit 0xEB
        __asm _emit 0xD3
    }
}
