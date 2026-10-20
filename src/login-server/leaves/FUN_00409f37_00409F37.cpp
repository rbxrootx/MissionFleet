// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00409F37 .. +0x73 bytes.
extern "C" __declspec(naked) void FUN_00409f37_00409F37() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 439d44h
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
        sub esp, 60h
        mov dword ptr [ebp - 6ch], ecx
        mov eax, dword ptr [ebp + 8]
        and eax, 0fff0h
        cmp eax, 10h
        ; Exact mapped bytes 75 28: jne 0x409f8a
        __asm _emit 0x75
        __asm _emit 0x28
        lea ecx, [ebp - 68h]
        ; Exact mapped bytes E8 C6 F9 FF FF: call 0x409930
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0xf9
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0
        lea ecx, [ebp - 68h]
        ; Exact mapped bytes E8 44 4A 02 00: call 0x42e9bd
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0x4a
        __asm _emit 0x02
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 68h]
        ; Exact mapped bytes E8 B8 0D 00 00: call 0x40ad40
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 10: jmp 0x409f9a
        __asm _emit 0xeb
        __asm _emit 0x10
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 6ch]
        ; Exact mapped bytes E8 46 10 00 00: call 0x40afe0
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0x10
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
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
