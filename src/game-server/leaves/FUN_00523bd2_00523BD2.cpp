// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00523BD2 .. +0x47 bytes.
extern "C" __declspec(naked) void FUN_00523bd2_00523BD2() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        push 14fh
        push 5c8174h
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes E8 74 75 FD FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0xfd
        __asm _emit 0xff
        push 1
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 F5 28 FD FF: call 0x4f64eb
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0x28
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 16: jne 0x523c10
        __asm _emit 0x75
        __asm _emit 0x16
        push 5c81e4h
        push 5c8210h
        ; Exact mapped bytes E8 0C C0 FA FF: call 0x4cfc15
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0xc0
        __asm _emit 0xfa
        __asm _emit 0xff
        add esp, 8
        xor eax, eax
        ; Exact mapped bytes EB 05: jmp 0x523c15
        __asm _emit 0xeb
        __asm _emit 0x05
        mov eax, 1
        mov esp, ebp
        pop ebp
        ret
    }
}
