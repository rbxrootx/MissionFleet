// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5876DA60 .. +0x7D bytes.
extern "C" __declspec(naked) void FUN_5876da60_5876DA60() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 14h
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [eax + 5ed0h], ecx
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 74 2F: je 0x5876daaa
        __asm _emit 0x74
        __asm _emit 0x2f
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 1120h]
        mov dword ptr [ebp - 8], eax
        push 1
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 4F 84 D1 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0x84
        __asm _emit 0xd1
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 1124h]
        mov dword ptr [ebp - 0ch], edx
        push 1
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 39 84 D1 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0x84
        __asm _emit 0xd1
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 2D: jmp 0x5876dad7
        __asm _emit 0xeb
        __asm _emit 0x2d
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 1120h]
        mov dword ptr [ebp - 10h], ecx
        push 0
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 20 84 D1 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0x84
        __asm _emit 0xd1
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 1124h]
        mov dword ptr [ebp - 14h], eax
        push 0
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 0A 84 D1 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0x84
        __asm _emit 0xd1
        __asm _emit 0xff
        nop
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
