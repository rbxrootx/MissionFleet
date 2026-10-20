// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004CD440 .. +0x65 bytes.
extern "C" __declspec(naked) void FUN_004cd440_004CD440() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        mov dword ptr [ebp - 0ch], ecx
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 68 78 05 00: call 0x524cb9
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0x78
        __asm _emit 0x05
        __asm _emit 0x00
        mov eax, dword ptr [eax + 4]
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp + 0ch]
        cmp ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes 7C 05: jl 0x4cd464
        __asm _emit 0x7c
        __asm _emit 0x05
        or eax, 0ffffffffh
        ; Exact mapped bytes EB 3B: jmp 0x4cd49f
        __asm _emit 0xeb
        __asm _emit 0x3b
        mov edx, dword ptr [ebp + 8]
        and edx, 0ffh
        push edx
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [eax]
        add ecx, dword ptr [ebp + 0ch]
        push ecx
        ; Exact mapped bytes E8 F4 C1 F7 FF: call 0x449670
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0xc1
        __asm _emit 0xf7
        __asm _emit 0xff
        add esp, 8
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 75 09: jne 0x4cd491
        __asm _emit 0x75
        __asm _emit 0x09
        mov dword ptr [ebp - 10h], 0ffffffffh
        ; Exact mapped bytes EB 0B: jmp 0x4cd49c
        __asm _emit 0xeb
        __asm _emit 0x0b
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [ebp - 4]
        sub eax, dword ptr [edx]
        mov dword ptr [ebp - 10h], eax
        mov eax, dword ptr [ebp - 10h]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
