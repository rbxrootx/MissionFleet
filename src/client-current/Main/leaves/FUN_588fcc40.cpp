// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588FCC40 .. +0xE6 bytes.
extern "C" __declspec(naked) void FUN_588fcc40() {
    __asm {
        push ecx
        mov eax, dword ptr [esp + 8]
        push ebp
        mov ebp, ecx
        mov ecx, dword ptr [esp + 10h]
        add eax, ecx
        movzx eax, ax
        ; Exact mapped bytes 66 83 F8 01: cmp ax, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x01
        ; Exact mapped bytes 0F 82 C9 00 00 00: jb 0x588fcd24
        __asm _emit 0x0f
        __asm _emit 0x82
        __asm _emit 0xc9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push ebx
        push esi
        push edi
        movzx edi, ax
        xor ecx, ecx
        mov eax, edi
        mov edx, 8
        mul edx
        seto cl
        neg ecx
        or ecx, eax
        push ecx
        ; Exact mapped bytes E8 B5 48 07 00: call 0x5897152e
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0x48
        __asm _emit 0x07
        __asm _emit 0x00
        mov ebx, eax
        lea eax, [edi*8]
        push eax
        mov dword ptr [esp + 18h], eax
        mov eax, dword ptr [esp + 28h]
        push eax
        push ebx
        ; Exact mapped bytes E8 BA 00 08 00: call 0x5897cd4c
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0x00
        __asm _emit 0x08
        __asm _emit 0x00
        add esp, 10h
        xor esi, esi
        test edi, edi
        ; Exact mapped bytes 7E 1B: jle 0x588fccb6
        __asm _emit 0x7e
        __asm _emit 0x1b
        ; Exact mapped bytes EB 03: jmp 0x588fcca0
        __asm _emit 0xeb
        __asm _emit 0x03
        ; Exact mapped bytes 8D 49 00: lea ecx, [ecx]
        __asm _emit 0x8d
        __asm _emit 0x49
        __asm _emit 0x00
        mov ecx, dword ptr [ebx + esi*8 + 4]
        mov edx, dword ptr [ebx + esi*8]
        push ecx
        mov ecx, dword ptr [ebp + 68h]
        push edx
        ; Exact mapped bytes E8 9F 2E 00 00: call 0x588ffb50
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0x2e
        __asm _emit 0x00
        __asm _emit 0x00
        inc esi
        cmp esi, edi
        ; Exact mapped bytes 7C EA: jl 0x588fcca0
        __asm _emit 0x7c
        __asm _emit 0xea
        mov ecx, dword ptr [esp + 20h]
        mov eax, dword ptr [esp + 10h]
        add eax, ecx
        mov ecx, dword ptr [esp + 18h]
        push eax
        ; Exact mapped bytes 66 85 C9: test cx, cx
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xc9
        ; Exact mapped bytes 76 1E: jbe 0x588fcce8
        __asm _emit 0x76
        __asm _emit 0x1e
        mov edx, dword ptr [esp + 20h]
        push edx
        push ecx
        mov ecx, ebp
        ; Exact mapped bytes E8 39 F4 FF FF: call 0x588fc110
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0xf4
        __asm _emit 0xff
        __asm _emit 0xff
        push ebx
        ; Exact mapped bytes E8 49 01 08 00: call 0x5897ce26
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0x01
        __asm _emit 0x08
        __asm _emit 0x00
        add esp, 4
        pop edi
        pop esi
        pop ebx
        pop ebp
        pop ecx
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
        mov dword ptr [ebp + 0a0h], 1
        ; Exact mapped bytes 8B 0D F4 47 A2 58: mov ecx, dword ptr [0x58a247f4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf4
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes E8 F3 76 FF FF: call 0x588f43f0
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0x76
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes A1 98 45 A2 58: mov eax, dword ptr [0x58a24598]
        __asm _emit 0xa1
        __asm _emit 0x98
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov ecx, dword ptr [eax + 0db4h]
        ; Exact mapped bytes E8 E3 63 F7 FF: call 0x588730f0
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0x63
        __asm _emit 0xf7
        __asm _emit 0xff
        mov ecx, dword ptr [ebp + 0a8h]
        ; Exact mapped bytes E8 E8 F8 FB FF: call 0x588bc600
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0xfb
        __asm _emit 0xff
        push ebx
        ; Exact mapped bytes E8 08 01 08 00: call 0x5897ce26
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x08
        __asm _emit 0x00
        add esp, 4
        pop edi
        pop esi
        pop ebx
        pop ebp
        pop ecx
    }
}
