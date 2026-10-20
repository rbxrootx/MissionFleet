// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00561FA2 .. +0x97 bytes.
extern "C" __declspec(naked) void FUN_00561fa2_00561FA2() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov dword ptr [ebp - 0ch], ecx
        push 23dh
        push 67c6f0h
        mov eax, dword ptr [ebp - 0ch]
        push eax
        ; Exact mapped bytes E8 A2 82 F7 FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0x82
        __asm _emit 0xf7
        __asm _emit 0xff
        push 23eh
        push 67c6f0h
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ecx + 54h]
        push edx
        ; Exact mapped bytes E8 8C 82 F7 FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0x82
        __asm _emit 0xf7
        __asm _emit 0xff
        push 0
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [eax + 54h]
        push ecx
        ; Exact mapped bytes E8 7F B6 F8 FF: call 0x4ed661
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0xb6
        __asm _emit 0xf8
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 24: je 0x56200f
        __asm _emit 0x74
        __asm _emit 0x24
        push 1
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ecx + 54h]
        push edx
        mov eax, dword ptr [ebp - 4]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes FF 92 00 01 00 00: call dword ptr [edx + 0x100]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 8], eax
        ; Exact mapped bytes EB 21: jmp 0x562030
        __asm _emit 0xeb
        __asm _emit 0x21
        push 1
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov edx, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [edx + 54h]
        mov eax, dword ptr [ebp - 0ch]
        mov edx, dword ptr [eax + 54h]
        mov eax, dword ptr [edx]
        ; Exact mapped bytes FF 90 C8 00 00 00: call dword ptr [eax + 0xc8]
        __asm _emit 0xff
        __asm _emit 0x90
        __asm _emit 0xc8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 8], eax
        mov eax, dword ptr [ebp - 8]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
