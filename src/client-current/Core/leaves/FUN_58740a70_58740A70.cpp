// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58740A70 .. +0x51 bytes.
extern "C" __declspec(naked) void FUN_58740a70_58740A70() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push 7fffffffh
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes E8 5A 5C D4 FF: call 0x584866e0
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0x5c
        __asm _emit 0xd4
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 7C 1D: jl 0x58740aac
        __asm _emit 0x7c
        __asm _emit 0x1d
        push 7ffffffeh
        mov edx, dword ptr [ebp + 10h]
        push edx
        push 0
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes E8 19 5B D4 FF: call 0x584865c0
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0x5b
        __asm _emit 0xd4
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        ; Exact mapped bytes EB 0C: jmp 0x58740ab8
        __asm _emit 0xeb
        __asm _emit 0x0c
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 76 06: jbe 0x58740ab8
        __asm _emit 0x76
        __asm _emit 0x06
        mov edx, dword ptr [ebp + 8]
        mov byte ptr [edx], 0
        mov eax, dword ptr [ebp - 4]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
