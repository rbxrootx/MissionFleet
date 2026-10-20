// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x586ED760 .. +0x82 bytes.
extern "C" __declspec(naked) void FUN_586ed760_586ED760() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 14h
        mov dword ptr [ebp - 0ch], ecx
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x586ed77b
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 4]
        add eax, 1
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 20h
        ; Exact mapped bytes 7D 5D: jge 0x586ed7de
        __asm _emit 0x7d
        __asm _emit 0x5d
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x586ed793
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 8]
        add ecx, 1
        mov dword ptr [ebp - 8], ecx
        cmp dword ptr [ebp - 8], 2
        ; Exact mapped bytes 7D 43: jge 0x586ed7dc
        __asm _emit 0x7d
        __asm _emit 0x43
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 0ch]
        lea ecx, [eax + edx*8 + 974h]
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ecx + edx*4]
        mov dword ptr [ebp - 10h], eax
        push 0
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 27 87 D9 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0x87
        __asm _emit 0xd9
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 0ch]
        lea eax, [edx + ecx*8 + 0a74h]
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [eax + ecx*4]
        mov dword ptr [ebp - 14h], edx
        push 0
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 07 87 D9 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0x87
        __asm _emit 0xd9
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB AE: jmp 0x586ed78a
        __asm _emit 0xeb
        __asm _emit 0xae
        ; Exact mapped bytes EB 94: jmp 0x586ed772
        __asm _emit 0xeb
        __asm _emit 0x94
        mov esp, ebp
        pop ebp
        ret
    }
}
