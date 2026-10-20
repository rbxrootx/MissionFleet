// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00405DE7 .. +0xB1 bytes.
extern "C" __declspec(naked) void FUN_00405de7_00405DE7() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        push 0
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 08 02 00 00: call 0x406000
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        push 0ch
        push 0ffh
        mov eax, dword ptr [ebp - 4]
        add eax, 110h
        push eax
        push 448e70h
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes E8 BE F9 00 00: call 0x4157d6
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0xf9
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        push 0ch
        push 0ffh
        mov edx, dword ptr [ebp - 4]
        add edx, 114h
        push edx
        push 448e7ch
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 9D F9 00 00: call 0x4157d6
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0xf9
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        push 0ch
        push 0ffh
        mov ecx, dword ptr [ebp - 4]
        add ecx, 118h
        push ecx
        push 448e84h
        mov edx, dword ptr [ebp + 8]
        push edx
        ; Exact mapped bytes E8 7C F9 00 00: call 0x4157d6
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0xf9
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        push 0ch
        push 0ffh
        mov eax, dword ptr [ebp - 4]
        add eax, 11ch
        push eax
        push 448e90h
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes E8 5C F9 00 00: call 0x4157d6
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0xf9
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        add edx, 120h
        push edx
        push 448ea0h
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 59 00 01 00: call 0x415eeb
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
