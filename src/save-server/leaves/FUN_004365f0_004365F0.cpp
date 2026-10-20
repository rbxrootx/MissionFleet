// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004365F0 .. +0x79 bytes.
extern "C" __declspec(naked) void FUN_004365f0_004365F0() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58bc59h
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
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 2C FE 02 00: call 0x466440
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0xfe
        __asm _emit 0x02
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax], 634560h
        push 100h
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes E8 9E FF FF FF: call 0x4365d0
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        push eax
        mov edx, dword ptr [ebp - 10h]
        add edx, 0ch
        push edx
        ; Exact mapped bytes E8 FE EF 02 00: call 0x465640
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0xef
        __asm _emit 0x02
        __asm _emit 0x00
        add esp, 0ch
        mov eax, dword ptr [ebp - 10h]
        mov byte ptr [eax + 10bh], 0
        mov dword ptr [ebp - 4], 0ffffffffh
        mov eax, dword ptr [ebp - 10h]
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
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
