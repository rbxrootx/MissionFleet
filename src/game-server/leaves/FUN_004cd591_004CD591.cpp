// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004CD591 .. +0x76 bytes.
extern "C" __declspec(naked) void FUN_004cd591_004CD591() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov dword ptr [ebp - 8], ecx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 4F 39 06 00: call 0x530ef1
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0x39
        __asm _emit 0x06
        __asm _emit 0x00
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 74 56: je 0x4cd5fe
        __asm _emit 0x74
        __asm _emit 0x56
        mov eax, dword ptr [ebp + 0ch]
        shl eax, 1
        push eax
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 63 FF 01 00: call 0x4ed519
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0xff
        __asm _emit 0x01
        __asm _emit 0x00
        push 0
        push 0
        mov ecx, dword ptr [ebp + 0ch]
        lea edx, [ecx + ecx + 1]
        push edx
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        push 0
        push 0
        ; Exact mapped bytes FF 15 E0 23 5E 00: call dword ptr [0x5e23e0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe0
        __asm _emit 0x23
        __asm _emit 0x5e
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 7C 08: jl 0x4cd5eb
        __asm _emit 0x7c
        __asm _emit 0x08
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ebp - 0ch], ecx
        ; Exact mapped bytes EB 07: jmp 0x4cd5f2
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 0ch], 0ffffffffh
        mov edx, dword ptr [ebp - 0ch]
        push edx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 35 0B 02 00: call 0x4ee133
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0x0b
        __asm _emit 0x02
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 8]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
