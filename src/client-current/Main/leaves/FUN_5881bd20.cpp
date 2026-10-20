// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5881BD20 .. +0x9B bytes.
extern "C" __declspec(naked) void FUN_5881bd20() {
    __asm {
        sub esp, 8
        push ebx
        push ebp
        mov ebp, dword ptr [esp + 14h]
        push esi
        push edi
        mov edi, dword ptr [esp + 20h]
        mov esi, ecx
        mov ecx, dword ptr [esi + edi*4 + 98h]
        push ebp
        ; Exact mapped bytes E8 22 36 F4 FF: call 0x5875f360
        __asm _emit 0xe8
        __asm _emit 0x22
        __asm _emit 0x36
        __asm _emit 0xf4
        __asm _emit 0xff
        mov eax, dword ptr [esi + edi*4 + 98h]
        mov eax, dword ptr [eax + 50h]
        mov ebx, dword ptr [eax]
        lea ecx, [esp + 10h]
        push ecx
        push ebp
        mov dword ptr [esp + 28h], eax
        add ebx, 4
        ; Exact mapped bytes FF 15 A8 C1 98 58: call dword ptr [0x5898c1a8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa8
        __asm _emit 0xc1
        __asm _emit 0x98
        __asm _emit 0x58
        mov ecx, dword ptr [esp + 24h]
        mov edx, dword ptr [ebx]
        push eax
        push ebp
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov eax, dword ptr [esp + 10h]
        mov ecx, dword ptr [esi + 4]
        cdq
        sub eax, edx
        sar eax, 1
        sub ecx, eax
        add ecx, 104h
        push ecx
        mov ecx, dword ptr [esi + edi*4 + 98h]
        ; Exact mapped bytes E8 58 75 0E 00: call 0x589032e0
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0x75
        __asm _emit 0x0e
        __asm _emit 0x00
        sub edi, 2
        ; Exact mapped bytes 75 24: jne 0x5881bdb1
        __asm _emit 0x75
        __asm _emit 0x24
        mov ecx, dword ptr [esi + 0a4h]
        mov edx, dword ptr [ecx + 8]
        add edx, 14h
        push edx
        ; Exact mapped bytes E8 C1 75 0E 00: call 0x58903360
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0x75
        __asm _emit 0x0e
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0a8h]
        mov eax, dword ptr [ecx + 8]
        add eax, 14h
        push eax
        ; Exact mapped bytes E8 AF 75 0E 00: call 0x58903360
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0x75
        __asm _emit 0x0e
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
