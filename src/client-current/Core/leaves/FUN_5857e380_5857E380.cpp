// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5857E380 .. +0x4D bytes.
extern "C" __declspec(naked) void FUN_5857e380_5857E380() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov dword ptr [ebp - 0ch], ecx
        mov eax, dword ptr [ebp + 8]
        shl eax, 10h
        or eax, dword ptr [ebp + 0ch]
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp + 10h]
        mov dword ptr [ebp - 8], ecx
        push 0
        mov edx, dword ptr [ebp + 14h]
        push edx
        ; Exact mapped bytes E8 DA 2D 2D 00: call 0x58851180
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0x2d
        __asm _emit 0x2d
        __asm _emit 0x00
        add esp, 4
        add eax, 1
        push eax
        mov eax, dword ptr [ebp + 14h]
        push eax
        mov ecx, dword ptr [ebp - 4]
        push ecx
        mov edx, dword ptr [ebp - 8]
        push edx
        push 80013200h
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 CA E5 2A 00: call 0x5882c990
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0xe5
        __asm _emit 0x2a
        __asm _emit 0x00
        nop
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
