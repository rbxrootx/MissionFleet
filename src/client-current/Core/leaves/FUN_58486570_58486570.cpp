// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58486570 .. +0x4F bytes.
extern "C" __declspec(naked) void FUN_58486570_58486570() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        push 7fffffffh
        lea eax, [ebp - 8]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        ; Exact mapped bytes E8 84 01 00 00: call 0x58486710
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 7C 21: jl 0x584865b6
        __asm _emit 0x7c
        __asm _emit 0x21
        push 7ffffffeh
        mov eax, dword ptr [ebp + 10h]
        push eax
        push 0
        mov ecx, dword ptr [ebp + 0ch]
        sub ecx, dword ptr [ebp - 8]
        push ecx
        mov edx, dword ptr [ebp + 8]
        add edx, dword ptr [ebp - 8]
        push edx
        ; Exact mapped bytes E8 0D 00 00 00: call 0x584865c0
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        mov eax, dword ptr [ebp - 4]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
