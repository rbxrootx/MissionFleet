// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584B54F0 .. +0xBD bytes.
extern "C" __declspec(naked) void FUN_584b54f0_584B54F0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 1ch
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [eax + 50h], ecx
        push 1ch
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp - 4]
        add eax, 64h
        push eax
        ; Exact mapped bytes E8 7C 73 39 00: call 0x5884c890
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0x73
        __asm _emit 0x39
        __asm _emit 0x00
        add esp, 0ch
        push 1ch
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov edx, dword ptr [ebp - 4]
        add edx, 80h
        push edx
        ; Exact mapped bytes E8 64 73 39 00: call 0x5884c890
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0x73
        __asm _emit 0x39
        __asm _emit 0x00
        add esp, 0ch
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 54h]
        mov dword ptr [ebp - 10h], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 50h]
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 9ch]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx*4 + 64h]
        push ecx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 76 F5 FC FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0xf5
        __asm _emit 0xfc
        __asm _emit 0xff
        mov dword ptr [ebp - 0ch], eax
        mov edx, dword ptr [ebp - 0ch]
        push edx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 F7 16 FD FF: call 0x58486c60
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0x16
        __asm _emit 0xfd
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 58h]
        mov dword ptr [ebp - 1ch], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 50h]
        mov dword ptr [ebp - 14h], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 9ch]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx*4 + 80h]
        push ecx
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 39 F5 FC FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0xf5
        __asm _emit 0xfc
        __asm _emit 0xff
        mov dword ptr [ebp - 18h], eax
        mov edx, dword ptr [ebp - 18h]
        push edx
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 BA 16 FD FF: call 0x58486c60
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0x16
        __asm _emit 0xfd
        __asm _emit 0xff
        nop
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
