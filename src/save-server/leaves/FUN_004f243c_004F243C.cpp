// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004F243C .. +0x50 bytes.
extern "C" __declspec(naked) void FUN_004f243c_004F243C() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov dword ptr [ebp - 0ch], ecx
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 1D 7F FE FF: call 0x4da36a
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0x7f
        __asm _emit 0xfe
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 0ch]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes FF 52 68: call dword ptr [edx + 0x68]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x68
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 27: je 0x4f2488
        __asm _emit 0x74
        __asm _emit 0x27
        lea eax, [ebp - 4]
        push eax
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes FF 52 6C: call dword ptr [edx + 0x6c]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x6c
        mov dword ptr [ebp - 8], eax
        push 3abh
        push 678234h
        mov eax, dword ptr [ebp - 8]
        push eax
        ; Exact mapped bytes E8 DA 7D FE FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0x7d
        __asm _emit 0xfe
        __asm _emit 0xff
        ; Exact mapped bytes EB D3: jmp 0x4f245b
        __asm _emit 0xeb
        __asm _emit 0xd3
        mov esp, ebp
        pop ebp
        ret
    }
}
