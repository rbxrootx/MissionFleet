// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004BF312 .. +0x71 bytes.
extern "C" __declspec(naked) void FUN_004bf312_004BF312() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 4], ecx
        push 0b6h
        push 67462ch
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes E8 31 AF 01 00: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0xaf
        __asm _emit 0x01
        __asm _emit 0x00
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 7D 14: jge 0x4bf349
        __asm _emit 0x7d
        __asm _emit 0x14
        push 0b7h
        push 67462ch
        ; Exact mapped bytes E8 FC 99 06 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0x99
        __asm _emit 0x06
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4bf349
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 E0: jne 0x4bf32f
        __asm _emit 0x75
        __asm _emit 0xe0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp + 8]
        cmp eax, dword ptr [edx + 8]
        ; Exact mapped bytes 7C 11: jl 0x4bf36b
        __asm _emit 0x7c
        __asm _emit 0x11
        push -1
        mov ecx, dword ptr [ebp + 8]
        add ecx, 1
        push ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 CC FA FF FF: call 0x4bee37
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 4]
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ebp + 0ch]
        mov dword ptr [eax + ecx*4], edx
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
