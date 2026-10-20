// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0040614C .. +0x70 bytes.
extern "C" __declspec(naked) void FUN_0040614c_0040614C() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        push 0
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 A3 FE FF FF: call 0x406000
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        add eax, 110h
        push eax
        push 448ee8h
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes E8 3E FB 00 00: call 0x415cb2
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0xfb
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        push 0ch
        push 0ffh
        mov edx, dword ptr [ebp - 4]
        add edx, 114h
        push edx
        push 448ef0h
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 41 F6 00 00: call 0x4157d6
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0xf6
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        push 0ch
        push 0ffh
        mov ecx, dword ptr [ebp - 4]
        add ecx, 118h
        push ecx
        push 448ef8h
        mov edx, dword ptr [ebp + 8]
        push edx
        ; Exact mapped bytes E8 20 F6 00 00: call 0x4157d6
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0xf6
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
