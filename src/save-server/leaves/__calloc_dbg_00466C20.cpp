// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00466C20 .. +0x60 bytes.
extern "C" __declspec(naked) void __calloc_dbg_00466C20() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov eax, dword ptr [ebp + 0ch]
        imul eax, dword ptr [ebp + 8]
        mov dword ptr [ebp + 0ch], eax
        mov ecx, dword ptr [ebp + 18h]
        push ecx
        mov edx, dword ptr [ebp + 14h]
        push edx
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        ; Exact mapped bytes E8 7B FB FF FF: call 0x4667c0
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 10h
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 28: je 0x466c79
        __asm _emit 0x74
        __asm _emit 0x28
        mov edx, dword ptr [ebp - 8]
        mov dword ptr [ebp - 0ch], edx
        mov eax, dword ptr [ebp - 0ch]
        add eax, dword ptr [ebp + 0ch]
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp - 0ch]
        cmp ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 73 11: jae 0x466c79
        __asm _emit 0x73
        __asm _emit 0x11
        mov edx, dword ptr [ebp - 0ch]
        mov byte ptr [edx], 0
        mov eax, dword ptr [ebp - 0ch]
        add eax, 1
        mov dword ptr [ebp - 0ch], eax
        ; Exact mapped bytes EB E7: jmp 0x466c60
        __asm _emit 0xeb
        __asm _emit 0xe7
        mov eax, dword ptr [ebp - 8]
        mov esp, ebp
        pop ebp
        ret
    }
}
