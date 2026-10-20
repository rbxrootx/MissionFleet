// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5850C370 .. +0x75 bytes.
extern "C" __declspec(naked) void FUN_5850c370_5850C370() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 18h
        mov dword ptr [ebp - 4], ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 1F D9 FF FF: call 0x58509ca0
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0xd9
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 18h], eax
        mov dword ptr [ebp - 14h], edx
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 7C 27: jl 0x5850c3b4
        __asm _emit 0x7c
        __asm _emit 0x27
        ; Exact mapped bytes 7F 06: jg 0x5850c395
        __asm _emit 0x7f
        __asm _emit 0x06
        cmp dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 76 1F: jbe 0x5850c3b4
        __asm _emit 0x76
        __asm _emit 0x1f
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 33 D9 FF FF: call 0x58509cd0
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0xd9
        __asm _emit 0xff
        __asm _emit 0xff
        mov cl, byte ptr [ebp + 8]
        mov byte ptr [eax], cl
        movzx edx, byte ptr [ebp + 8]
        push edx
        ; Exact mapped bytes E8 D4 90 FF FF: call 0x58505480
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0x90
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 8], eax
        ; Exact mapped bytes EB 28: jmp 0x5850c3dc
        __asm _emit 0xeb
        __asm _emit 0x28
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx + 0ch]
        mov dword ptr [ebp - 10h], edx
        movzx eax, byte ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 B7 90 FF FF: call 0x58505480
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0x90
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 0ch], eax
        mov ecx, dword ptr [ebp - 0ch]
        push ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes FF 55 F0: call dword ptr [ebp - 0x10]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xf0
        mov dword ptr [ebp - 8], eax
        mov eax, dword ptr [ebp - 8]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
