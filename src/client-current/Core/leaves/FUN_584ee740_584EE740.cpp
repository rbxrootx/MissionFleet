// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584EE740 .. +0x38 bytes.
extern "C" __declspec(naked) void FUN_584ee740_584EE740() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push esi
        push edi
        mov eax, dword ptr [ebp + 0ch]
        push eax
        push 128h
        ; Exact mapped bytes E8 2C 92 F9 FF: call 0x58487980
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0x92
        __asm _emit 0xf9
        __asm _emit 0xff
        add esp, 8
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        ; Exact mapped bytes E8 4D 8B F9 FF: call 0x584872b0
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0x8b
        __asm _emit 0xf9
        __asm _emit 0xff
        add esp, 4
        mov ecx, 4ah
        mov esi, eax
        mov edi, dword ptr [ebp - 4]
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        pop edi
        pop esi
        mov esp, ebp
        pop ebp
        ret
    }
}
