// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0050D48C .. +0x50 bytes.
extern "C" __declspec(naked) void FUN_0050d48c_0050D48C() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov dword ptr [ebp - 0ch], ecx
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 CD DD FE FF: call 0x4fb26a
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0xdd
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
        ; Exact mapped bytes 74 27: je 0x50d4d8
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
        push 5cba5ch
        mov eax, dword ptr [ebp - 8]
        push eax
        ; Exact mapped bytes E8 8A DC FE FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0xdc
        __asm _emit 0xfe
        __asm _emit 0xff
        ; Exact mapped bytes EB D3: jmp 0x50d4ab
        __asm _emit 0xeb
        __asm _emit 0xd3
        mov esp, ebp
        pop ebp
        ret
    }
}
