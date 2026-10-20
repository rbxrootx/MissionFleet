// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5876D170 .. +0x62 bytes.
extern "C" __declspec(naked) void FUN_5876d170() {
    __asm {
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esi + 0b4h]
        mov edx, dword ptr [ecx + 4]
        mov eax, dword ptr [esi + 0c0h]
        sub edx, dword ptr [eax + 4]
        mov eax, dword ptr [esp + 8]
        mov ecx, dword ptr [esi + 78h]
        add eax, edx
        imul ecx, eax
        mov dword ptr [esi + 58h], eax
        mov eax, 51eb851fh
        imul ecx
        mov eax, dword ptr [esp + 0ch]
        sar edx, 5
        mov ecx, edx
        shr ecx, 1fh
        add ecx, edx
        mov edx, 258h
        sub edx, ecx
        sub edx, dword ptr [esi + 80h]
        mov ecx, dword ptr [esi + 50h]
        push eax
        mov dword ptr [esi + 5ch], edx
        ; Exact mapped bytes E8 CE A7 19 00: call 0x58907990
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0xa7
        __asm _emit 0x19
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 50h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 4]
        push 1
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        pop esi
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
