// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58832974 .. +0x5C bytes.
extern "C" __declspec(naked) void FUN_58832974_58832974() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push esi
        mov esi, ecx
        push edi
        mov dword ptr [ebp - 4], esi
        or dword ptr [esi], 0ffffffffh
        lea ecx, [esi + 4]
        ; Exact mapped bytes E8 D1 FF FF FF: call 0x5883295b
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        push 1010h
        xor edi, edi
        lea eax, [esi + 20h]
        push edi
        push eax
        ; Exact mapped bytes E8 75 A4 01 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0x75
        __asm _emit 0xa4
        __asm _emit 0x01
        __asm _emit 0x00
        push 408h
        lea eax, [esi + 1034h]
        mov dword ptr [esi + 1030h], edi
        push edi
        push eax
        ; Exact mapped bytes E8 5D A4 01 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0xa4
        __asm _emit 0x01
        __asm _emit 0x00
        add esp, 18h
        mov dword ptr [esi + 143ch], edi
        mov dword ptr [esi + 1440h], edi
        mov eax, esi
        mov dword ptr [esi + 1444h], edi
        pop edi
        pop esi
        mov esp, ebp
        pop ebp
        ret
    }
}
