// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00532955 .. +0x68 bytes.
extern "C" __declspec(naked) void FUN_00532955_00532955() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 8], ecx
        mov dword ptr [ebp - 4], 0
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 7C 0B: jl 0x532979
        __asm _emit 0x7c
        __asm _emit 0x0b
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp + 0ch]
        cmp ecx, dword ptr [eax + 8]
        ; Exact mapped bytes 7C 14: jl 0x53298d
        __asm _emit 0x7c
        __asm _emit 0x14
        push 0deh
        push 5820dch
        ; Exact mapped bytes E8 78 20 00 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0x20
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x53298d
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D5: jne 0x532968
        __asm _emit 0x75
        __asm _emit 0xd5
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 4]
        mov edx, dword ptr [ebp + 0ch]
        lea eax, [ecx + edx*4]
        push eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 D2 AA FB FF: call 0x4ed47a
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0xaa
        __asm _emit 0xfb
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        or ecx, 1
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp + 8]
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
