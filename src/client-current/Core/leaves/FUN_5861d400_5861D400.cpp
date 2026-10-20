// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5861D400 .. +0x90 bytes.
extern "C" __declspec(naked) void FUN_5861d400_5861D400() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        mov dword ptr [ebp - 8], ecx
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x5861d41b
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 4]
        add eax, 1
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 80h
        ; Exact mapped bytes 7D 66: jge 0x5861d48a
        __asm _emit 0x7d
        __asm _emit 0x66
        mov ecx, dword ptr [ebp + 8]
        push ecx
        imul edx, dword ptr [ebp - 4], 18h
        mov eax, dword ptr [ebp - 8]
        lea ecx, [eax + edx + 0fch]
        push ecx
        ; Exact mapped bytes FF 15 38 43 89 58: call dword ptr [0x58894338]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x38
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        test eax, eax
        ; Exact mapped bytes 75 47: jne 0x5861d488
        __asm _emit 0x75
        __asm _emit 0x47
        imul edx, dword ptr [ebp - 4], 18h
        mov eax, dword ptr [ebp - 8]
        lea ecx, [eax + edx + 0fch]
        mov edx, 1
        imul eax, edx, 0
        mov byte ptr [ecx + eax], 0
        ; Exact mapped bytes E8 90 9D EB FF: call 0x584d71f0
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0x9d
        __asm _emit 0xeb
        __asm _emit 0xff
        mov dword ptr [ebp - 10h], eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes FF 15 3C 43 89 58: call dword ptr [0x5889433c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x3c
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        mov dword ptr [ebp - 0ch], eax
        push 0
        mov edx, dword ptr [ebp - 0ch]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        push 1ceh
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 E9 B8 EB FF: call 0x584d8d70
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0xb8
        __asm _emit 0xeb
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 88: jmp 0x5861d412
        __asm _emit 0xeb
        __asm _emit 0x88
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
