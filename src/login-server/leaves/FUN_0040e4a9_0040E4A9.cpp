// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0040E4A9 .. +0x87 bytes.
extern "C" __declspec(naked) void FUN_0040e4a9_0040E4A9() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        push 0
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 46 7B FF FF: call 0x406000
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0x7b
        __asm _emit 0xff
        __asm _emit 0xff
        push 0
        push 0ch
        push 0ffh
        mov eax, dword ptr [ebp - 4]
        add eax, 110h
        push eax
        push 44984ch
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes E8 FC 72 00 00: call 0x4157d6
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0x72
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        push 0ch
        push 0ffh
        mov edx, dword ptr [ebp - 4]
        add edx, 114h
        push edx
        push 449854h
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 DB 72 00 00: call 0x4157d6
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0x72
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        add ecx, 118h
        push ecx
        push 449860h
        mov edx, dword ptr [ebp + 8]
        push edx
        ; Exact mapped bytes E8 9F 77 00 00: call 0x415cb2
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0x77
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        add eax, 11ch
        push eax
        push 44986ch
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes E8 88 77 00 00: call 0x415cb2
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0x77
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
