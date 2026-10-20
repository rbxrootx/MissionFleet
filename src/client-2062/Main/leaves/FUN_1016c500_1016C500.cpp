// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x1016C500 .. +0x4C bytes.
extern "C" __declspec(naked) void FUN_1016c500_1016C500() {
    __asm {
        push ebx
        xor ebx, ebx
        push esi
        mov esi, ecx
        push ebx
        ; Exact mapped bytes E8 64 F8 FF FF: call 0x1016bd70
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0xf8
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [esp + 0ch]
        mov dword ptr [esi], 10176c08h
        mov dword ptr [esi + 128h], eax
        mov byte ptr [esi + 60h], bl
        mov byte ptr [esi + 0a0h], bl
        mov byte ptr [esi + 0e0h], bl
        mov dword ptr [esi + 12ch], 0ffffffffh
        mov dword ptr [esi + 120h], 1
        mov dword ptr [esi + 124h], ebx
        mov eax, esi
        pop esi
        pop ebx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
