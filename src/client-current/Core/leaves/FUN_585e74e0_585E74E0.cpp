// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x585E74E0 .. +0x40 bytes.
extern "C" __declspec(naked) void FUN_585e74e0_585E74E0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 1
        ; Exact mapped bytes 74 02: je 0x585e74f7
        __asm _emit 0x74
        __asm _emit 0x02
        ; Exact mapped bytes EB 23: jmp 0x585e751a
        __asm _emit 0xeb
        __asm _emit 0x23
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 10d98h]
        mov dword ptr [ebp - 0ch], edx
        push 1
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 D3 E9 E9 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0xe9
        __asm _emit 0xe9
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 10d9ch], 64h
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
