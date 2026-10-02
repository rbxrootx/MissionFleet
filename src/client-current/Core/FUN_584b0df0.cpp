// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584B0DF0 .. +0x5D bytes.
extern "C" __declspec(naked) void FUN_584b0df0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        push 7fffffffh
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes E8 D8 58 FD FF: call 0x584866e0
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0x58
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 7C 29: jl 0x584b0e3a
        __asm _emit 0x7c
        __asm _emit 0x29
        lea edx, [ebp + 14h]
        mov dword ptr [ebp - 8], edx
        mov eax, dword ptr [ebp - 8]
        push eax
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        push 0
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 22 00 00 00: call 0x584b0e50
        __asm _emit 0xe8
        __asm _emit 0x22
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 0C: jmp 0x584b0e46
        __asm _emit 0xeb
        __asm _emit 0x0c
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 76 06: jbe 0x584b0e46
        __asm _emit 0x76
        __asm _emit 0x06
        mov ecx, dword ptr [ebp + 8]
        mov byte ptr [ecx], 0
        mov eax, dword ptr [ebp - 4]
        mov esp, ebp
        pop ebp
        ret
    }
}
