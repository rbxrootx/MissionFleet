// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004E8F80 .. +0x6A bytes.
extern "C" __declspec(naked) void __0CBrush__QAE_K_Z_004E8F80() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58cbbeh
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
        ; Exact mapped bytes E8 06 9C 04 00: call 0x532baa
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0x9c
        __asm _emit 0x04
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax], 6366c0h
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes FF 15 68 B6 68 00: call dword ptr [0x68b668]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x68
        __asm _emit 0xb6
        __asm _emit 0x68
        __asm _emit 0x00
        push eax
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 F7 FC FF FF: call 0x4e8cbe
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 05: jne 0x4e8fd0
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E8 A7 05 00 00: call 0x4e9577
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
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
