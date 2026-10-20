// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58797000 .. +0x74 bytes.
extern "C" __declspec(naked) void FUN_58797000_58797000() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 8B 02 00 00: call 0x587972a0
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes E8 62 A1 0B 00: call 0x58851180
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0xa1
        __asm _emit 0x0b
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 8], eax
        mov edx, dword ptr [ebp + 8]
        push edx
        ; Exact mapped bytes E8 53 A1 0B 00: call 0x58851180
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0xa1
        __asm _emit 0x0b
        __asm _emit 0x00
        add esp, 4
        cmp eax, 46h
        ; Exact mapped bytes 76 02: jbe 0x58797037
        __asm _emit 0x76
        __asm _emit 0x02
        ; Exact mapped bytes EB 37: jmp 0x5879706e
        __asm _emit 0xeb
        __asm _emit 0x37
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 4], 3
        ; Exact mapped bytes 7C 02: jl 0x58797042
        __asm _emit 0x7c
        __asm _emit 0x02
        ; Exact mapped bytes EB 2C: jmp 0x5879706e
        __asm _emit 0xeb
        __asm _emit 0x2c
        mov ecx, dword ptr [ebp + 8]
        push ecx
        push 47h
        mov edx, dword ptr [ebp - 4]
        imul eax, dword ptr [edx + 4], 47h
        mov ecx, dword ptr [ebp - 4]
        lea edx, [ecx + eax + 8]
        push edx
        ; Exact mapped bytes E8 24 D1 01 00: call 0x587b4180
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0xd1
        __asm _emit 0x01
        __asm _emit 0x00
        add esp, 0ch
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 4]
        add ecx, 1
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 4], ecx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
