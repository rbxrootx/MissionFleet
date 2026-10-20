// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x585EE760 .. +0x4A bytes.
extern "C" __declspec(naked) void FUN_585ee760_585EE760() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov dword ptr [ebp - 8], ecx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 9F 97 E9 FF: call 0x58487f10
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0x97
        __asm _emit 0xe9
        __asm _emit 0xff
        mov dword ptr [ebp - 0ch], eax
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 AE 97 E9 FF: call 0x58487f30
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0x97
        __asm _emit 0xe9
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx]
        push edx
        mov eax, dword ptr [ebp - 0ch]
        push eax
        ; Exact mapped bytes E8 5F AC FC FF: call 0x585b93f0
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0xac
        __asm _emit 0xfc
        __asm _emit 0xff
        add esp, 8
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx]
        push edx
        mov eax, dword ptr [ebp - 0ch]
        push eax
        ; Exact mapped bytes E8 9D AC FC FF: call 0x585b9440
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0xac
        __asm _emit 0xfc
        __asm _emit 0xff
        add esp, 8
        mov esp, ebp
        pop ebp
        ret
    }
}
