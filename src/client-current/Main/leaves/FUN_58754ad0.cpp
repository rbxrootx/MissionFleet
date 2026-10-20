// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58754AD0 .. +0xA1 bytes.
extern "C" __declspec(naked) void FUN_58754ad0() {
    __asm {
        sub esp, 8
        push ebx
        push esi
        mov esi, ecx
        mov ebx, dword ptr [esi + 0ch]
        push edi
        test ebx, ebx
        ; Exact mapped bytes 75 04: jne 0x58754ae3
        __asm _emit 0x75
        __asm _emit 0x04
        xor ecx, ecx
        ; Exact mapped bytes EB 16: jmp 0x58754af9
        __asm _emit 0xeb
        __asm _emit 0x16
        mov ecx, dword ptr [esi + 14h]
        sub ecx, ebx
        mov eax, 7f807f81h
        imul ecx
        sar edx, 0ah
        mov ecx, edx
        shr ecx, 1fh
        add ecx, edx
        mov edi, dword ptr [esi + 10h]
        mov edx, edi
        sub edx, ebx
        mov eax, 7f807f81h
        imul edx
        sar edx, 0ah
        mov eax, edx
        shr eax, 1fh
        add eax, edx
        cmp eax, ecx
        ; Exact mapped bytes 73 35: jae 0x58754b4a
        __asm _emit 0x73
        __asm _emit 0x35
        mov edx, dword ptr [esp + 18h]
        mov byte ptr [esp + 0ch], 0
        mov ecx, dword ptr [esp + 0ch]
        push ecx
        mov ecx, dword ptr [esp + 1ch]
        push edx
        lea eax, [esi + 8]
        push eax
        push ecx
        push 1
        push edi
        ; Exact mapped bytes E8 5B EB FF FF: call 0x58753690
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0xeb
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 18h
        add edi, 808h
        mov dword ptr [esi + 10h], edi
        pop edi
        pop esi
        pop ebx
        add esp, 8
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        cmp ebx, edi
        ; Exact mapped bytes 76 05: jbe 0x58754b53
        __asm _emit 0x76
        __asm _emit 0x05
        ; Exact mapped bytes E8 1F 81 22 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0x81
        __asm _emit 0x22
        __asm _emit 0x00
        mov edx, dword ptr [esp + 18h]
        mov eax, dword ptr [esi]
        push edx
        push edi
        push eax
        lea eax, [esp + 18h]
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 F8 FD FF FF: call 0x58754960
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        pop edi
        pop esi
        pop ebx
        add esp, 8
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
