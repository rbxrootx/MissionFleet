// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004094D0 .. +0x72 bytes.
extern "C" __declspec(naked) void FUN_004094d0_004094D0() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 439bf9h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes 64 89 25 00 00 00 00: mov dword ptr fs:[0], esp
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push ecx
        mov dword ptr [ebp - 10h], ecx
        push 0
        push 4000h
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 51 5B 00 00: call 0x40f050
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0x5b
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx], 43ca88h
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 79 5E 00 00: call 0x40f390
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0x5e
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 3F 00 00 00: call 0x40955e
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 89 15 DC DA 44 00: mov dword ptr [0x44dadc], edx
        __asm _emit 0x89
        __asm _emit 0x15
        __asm _emit 0xdc
        __asm _emit 0xda
        __asm _emit 0x44
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0ffffffffh
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
