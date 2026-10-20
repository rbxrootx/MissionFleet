// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00493ACB .. +0x6A bytes.
extern "C" __declspec(naked) void FUN_00493acb_00493ACB() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 57e34fh
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
        sub esp, 0ch
        mov dword ptr [ebp - 18h], ecx
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 16 D4 09 00: call 0x530f07
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0xd4
        __asm _emit 0x09
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0
        lea eax, [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes FF 92 90 00 00 00: call dword ptr [edx + 0x90]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 4E D4 09 00: call 0x530f60
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0xd4
        __asm _emit 0x09
        __asm _emit 0x00
        mov dword ptr [ebp - 14h], eax
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 28 9D 05 00: call 0x4ed84c
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0x9d
        __asm _emit 0x05
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 14h]
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
