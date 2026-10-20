// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0041E2BA .. +0x2C bytes.
extern "C" __declspec(naked) void FUN_0041e2ba_0041E2BA() {
    __asm {
        mov eax, 43b0f0h
        ; Exact mapped bytes E8 44 13 00 00: call 0x41f608
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        push ecx
        mov dword ptr [ebp - 10h], ecx
        mov dword ptr [ecx], 43f098h
        and dword ptr [ebp - 4], 0
        add ecx, 0ch
        ; Exact mapped bytes E8 D1 F8 00 00: call 0x42dbab
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0xf8
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        leave
        ret
    }
}
