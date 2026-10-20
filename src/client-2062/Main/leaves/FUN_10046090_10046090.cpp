// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10046090 .. +0x6E bytes.
extern "C" __declspec(naked) void FUN_10046090_10046090() {
    __asm {
        mov eax, dword ptr [esp + 14h]
        mov edx, dword ptr [esp + 0ch]
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esp + 14h]
        push edi
        push eax
        mov eax, dword ptr [esp + 14h]
        push ecx
        mov ecx, dword ptr [esp + 14h]
        push edx
        push eax
        push ecx
        mov ecx, esi
        ; Exact mapped bytes E8 7C CC FF FF: call 0x10042d30
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0xcc
        __asm _emit 0xff
        __asm _emit 0xff
        xor edx, edx
        mov ecx, 480h
        xor eax, eax
        lea edi, [esi + 2ech]
        mov dword ptr [esi], 101759f4h
        ; Exact mapped bytes 66 C7 86 7C 01 00 00 FF FF: mov word ptr [esi + 0x17c], 0xffff
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x86
        __asm _emit 0x7c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [esi + 2dch], 0aaaaaaaah
        mov dword ptr [esi + 2e0h], edx
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        mov ecx, 2dh
        lea edi, [esi + 228h]
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        mov dword ptr [esi + 2e4h], edx
        mov eax, esi
        pop edi
        pop esi
        ; Exact mapped bytes C2 14 00: ret 0x14
        __asm _emit 0xc2
        __asm _emit 0x14
        __asm _emit 0x00
    }
}
