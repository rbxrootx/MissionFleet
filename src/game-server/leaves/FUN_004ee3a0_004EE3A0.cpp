// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004EE3A0 .. +0x65 bytes.
extern "C" __declspec(naked) void FUN_004ee3a0_004EE3A0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        mov dword ptr [ebp - 0ch], ecx
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 08 2B 04 00: call 0x530eb9
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0x2b
        __asm _emit 0x04
        __asm _emit 0x00
        mov eax, dword ptr [eax + 4]
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp + 0ch]
        cmp ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes 7C 05: jl 0x4ee3c4
        __asm _emit 0x7c
        __asm _emit 0x05
        or eax, 0ffffffffh
        ; Exact mapped bytes EB 3B: jmp 0x4ee3ff
        __asm _emit 0xeb
        __asm _emit 0x3b
        mov edx, dword ptr [ebp + 8]
        and edx, 0ffh
        push edx
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [eax]
        add ecx, dword ptr [ebp + 0ch]
        push ecx
        ; Exact mapped bytes E8 04 EC F9 FF: call 0x48cfe0
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0xec
        __asm _emit 0xf9
        __asm _emit 0xff
        add esp, 8
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 75 09: jne 0x4ee3f1
        __asm _emit 0x75
        __asm _emit 0x09
        mov dword ptr [ebp - 10h], 0ffffffffh
        ; Exact mapped bytes EB 0B: jmp 0x4ee3fc
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
