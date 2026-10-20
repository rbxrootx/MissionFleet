// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00499130 .. +0x72 bytes.
extern "C" __declspec(naked) void FUN_00499130_00499130() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 57e5d5h
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
        sub esp, 14h
        mov dword ptr [ebp - 20h], ecx
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 9A 18 00 00: call 0x49a9f0
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0x18
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 20h]
        add ecx, 4
        ; Exact mapped bytes E8 C8 19 00 00: call 0x49ab30
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0x19
        __asm _emit 0x00
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 1
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 58 19 00 00: call 0x49aad0
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0x19
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 1ch]
        ; Exact mapped bytes E8 30 00 00 00: call 0x4991b0
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 1ch]
        ; Exact mapped bytes E8 78 FE FF FF: call 0x499000
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0ffffffffh
        mov eax, dword ptr [ebp - 20h]
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
