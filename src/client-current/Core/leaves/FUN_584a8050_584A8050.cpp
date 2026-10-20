// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584A8050 .. +0x77 bytes.
extern "C" __declspec(naked) void FUN_584a8050_584A8050() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 14h
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 4], eax
        mov eax, dword ptr [ebp + 0ch]
        mov dword ptr [ebp - 14h], eax
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 6F E9 FD FF: call 0x584869e0
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0xe9
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 F8 D6 FE FF: call 0x58495770
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0xd6
        __asm _emit 0xfe
        __asm _emit 0xff
        sub eax, dword ptr [ebp + 0ch]
        mov dword ptr [ebp - 0ch], eax
        mov ecx, dword ptr [ebp + 10h]
        mov dword ptr [ebp - 10h], ecx
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 51 E9 FD FF: call 0x584869e0
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0xe9
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 BA D6 FE FF: call 0x58495750
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0xd6
        __asm _emit 0xfe
        __asm _emit 0xff
        sub eax, dword ptr [ebp + 10h]
        mov dword ptr [ebp - 8], eax
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [ebp - 14h]
        mov dword ptr [edx], eax
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 4], ecx
        mov eax, dword ptr [ebp - 0ch]
        mov dword ptr [edx + 8], eax
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [edx + 0ch], ecx
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [ebp - 4]
        xor ecx, ebp
        ; Exact mapped bytes E8 8D 8F 38 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0x8f
        __asm _emit 0x38
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
