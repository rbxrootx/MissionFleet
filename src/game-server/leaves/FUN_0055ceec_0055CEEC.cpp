// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0055CEEC .. +0xCF bytes.
extern "C" __declspec(naked) void FUN_0055ceec_0055CEEC() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 8], ecx
        push 50eh
        push 5cebe0h
        mov eax, dword ptr [ebp - 8]
        push eax
        ; Exact mapped bytes E8 55 E2 F9 FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0xe2
        __asm _emit 0xf9
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 8]
        cmp dword ptr [ecx + 94h], 8
        ; Exact mapped bytes 7E 14: jle 0x55cf2b
        __asm _emit 0x7e
        __asm _emit 0x14
        push 50fh
        push 5cebe0h
        ; Exact mapped bytes E8 DA 7A FD FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0x7a
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x55cf2b
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 DA: jne 0x55cf0b
        __asm _emit 0x75
        __asm _emit 0xda
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x55cf43
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 4]
        add eax, 1
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        cmp edx, dword ptr [ecx + 94h]
        ; Exact mapped bytes 7D 18: jge 0x55cf69
        __asm _emit 0x7d
        __asm _emit 0x18
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 90h]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ecx + edx*4]
        cmp eax, dword ptr [ebp + 8]
        ; Exact mapped bytes 75 02: jne 0x55cf67
        __asm _emit 0x75
        __asm _emit 0x02
        ; Exact mapped bytes EB 02: jmp 0x55cf69
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes EB D1: jmp 0x55cf3a
        __asm _emit 0xeb
        __asm _emit 0xd1
        cmp dword ptr [ebp - 4], 8
        ; Exact mapped bytes 75 04: jne 0x55cf73
        __asm _emit 0x75
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 3F: jmp 0x55cfb2
        __asm _emit 0xeb
        __asm _emit 0x3f
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 90h]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [edx + eax*4], ecx
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        cmp eax, dword ptr [edx + 94h]
        ; Exact mapped bytes 75 15: jne 0x55cfa8
        __asm _emit 0x75
        __asm _emit 0x15
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 94h]
        add edx, 1
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [eax + 94h], edx
        mov eax, 1
        mov ecx, dword ptr [ebp - 4]
        shl eax, cl
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
