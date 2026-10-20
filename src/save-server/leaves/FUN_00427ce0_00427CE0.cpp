// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00427CE0 .. +0x103 bytes.
extern "C" __declspec(naked) void FUN_00427ce0_00427CE0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 50h
        push ebx
        push esi
        push edi
        push ecx
        lea edi, [ebp - 50h]
        mov ecx, 14h
        mov eax, 0cccccccch
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        pop ecx
        mov dword ptr [ebp - 4], ecx
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x427d0f
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 8]
        add eax, 1
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 64h
        ; Exact mapped bytes 0F 8D B7 00 00 00: jge 0x427dd0
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xb7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        add ecx, dword ptr [ebp - 8]
        xor edx, edx
        mov dl, byte ptr [ecx]
        cmp edx, 1
        ; Exact mapped bytes 0F 85 9F 00 00 00: jne 0x427dcb
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x9f
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0ch]
        mov edx, dword ptr [ebp - 8]
        imul edx, edx, 37ch
        cmp dword ptr [ecx + edx + 2bch], -1
        ; Exact mapped bytes 0F 84 82 00 00 00: je 0x427dcb
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x82
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0ch]
        mov edx, dword ptr [ebp - 8]
        imul edx, edx, 37ch
        mov dword ptr [ecx + edx + 2bch], 0ffffffffh
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0ch]
        mov edx, dword ptr [ebp - 8]
        imul edx, edx, 37ch
        mov eax, dword ptr [ecx + edx + 234h]
        and ah, 0fh
        mov ecx, dword ptr [ebp - 8]
        imul ecx, ecx, 37ch
        mov edx, dword ptr [ebp - 4]
        mov edx, dword ptr [edx + 0ch]
        mov dword ptr [edx + ecx + 234h], eax
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0ch]
        mov edx, dword ptr [ebp - 8]
        imul edx, edx, 37ch
        lea eax, [ecx + edx + 224h]
        push eax
        mov ecx, dword ptr [ebp - 4]
        add ecx, 4
        push ecx
        mov edx, esp
        mov dword ptr [ebp - 0ch], esp
        push ecx
        mov ecx, edx
        ; Exact mapped bytes E8 5D 47 0A 00: call 0x4cc51a
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x47
        __asm _emit 0x0a
        __asm _emit 0x00
        mov dword ptr [ebp - 10h], eax
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 10h]
        ; Exact mapped bytes E8 24 99 FD FF: call 0x4016ef
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0x99
        __asm _emit 0xfd
        __asm _emit 0xff
        ; Exact mapped bytes E9 36 FF FF FF: jmp 0x427d06
        __asm _emit 0xe9
        __asm _emit 0x36
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        pop edi
        pop esi
        pop ebx
        add esp, 50h
        cmp ebp, esp
        ; Exact mapped bytes E8 13 D0 03 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0xd0
        __asm _emit 0x03
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
