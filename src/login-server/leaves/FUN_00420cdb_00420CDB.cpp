// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00420CDB .. +0x27 bytes.
extern "C" __declspec(naked) void FUN_00420cdb_00420CDB() {
    __asm {
        mov ecx, dword ptr [esp + 0ch]
        push esi
        push edi
        cmp dword ptr [ecx], 0
        ; Exact mapped bytes 74 19: je 0x420cff
        __asm _emit 0x74
        __asm _emit 0x19
        mov eax, dword ptr [esp + 10h]
        mov esi, dword ptr [esp + 0ch]
        mov dl, byte ptr [esi]
        test dl, dl
        ; Exact mapped bytes 74 0B: je 0x420cff
        __asm _emit 0x74
        __asm _emit 0x0b
        mov edi, dword ptr [eax]
        mov byte ptr [edi], dl
        inc dword ptr [eax]
        inc esi
        dec dword ptr [ecx]
        ; Exact mapped bytes 75 EF: jne 0x420cee
        __asm _emit 0x75
        __asm _emit 0xef
        pop edi
        pop esi
        ret
    }
}
