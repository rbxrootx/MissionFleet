// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00408DB0 .. +0x69 bytes.
extern "C" __declspec(naked) void FUN_00408db0_00408DB0() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 439ac1h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes 64 89 25 00 00 00 00: mov dword ptr fs:[0], esp
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push ecx
        mov dword ptr [ebp - 10h], ecx
        mov dword ptr [ebp - 4], 2
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 14h
        ; Exact mapped bytes E8 CD 4D 02 00: call 0x42dbab
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0x4d
        __asm _emit 0x02
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 1
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 10h
        ; Exact mapped bytes E8 BE 4D 02 00: call 0x42dbab
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0x4d
        __asm _emit 0x02
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 0ch
        ; Exact mapped bytes E8 AF 4D 02 00: call 0x42dbab
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0x4d
        __asm _emit 0x02
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0ffffffffh
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 A0 4D 02 00: call 0x42dbab
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0x4d
        __asm _emit 0x02
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
        mov esp, ebp
        pop ebp
        ret
    }
}
