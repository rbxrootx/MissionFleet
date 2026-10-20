// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00572F64 .. +0x73 bytes.
extern "C" __declspec(naked) void FUN_00572f64_00572F64() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], ecx
        push 1e8h
        push 67cd14h
        mov eax, dword ptr [ebp - 8]
        push eax
        ; Exact mapped bytes E8 E0 72 F6 FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0x72
        __asm _emit 0xf6
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 8]
        cmp dword ptr [ecx + 0ach], 0
        ; Exact mapped bytes 74 34: je 0x572fc0
        __asm _emit 0x74
        __asm _emit 0x34
        ; Exact mapped bytes FF 15 28 BF 68 00: call dword ptr [0x68bf28]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x28
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 2A: jne 0x572fc0
        __asm _emit 0x75
        __asm _emit 0x2a
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 0ach]
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 0ach]
        mov ecx, dword ptr [edx]
        push eax
        ; Exact mapped bytes FF 51 0C: call dword ptr [ecx + 0xc]
        __asm _emit 0xff
        __asm _emit 0x51
        __asm _emit 0x0c
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 09: je 0x572fc0
        __asm _emit 0x74
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 4]
        push edx
        ; Exact mapped bytes E8 3A 8F FD FF: call 0x54befa
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0x8f
        __asm _emit 0xfd
        __asm _emit 0xff
        push 1f1h
        push 67cd14h
        mov eax, dword ptr [ebp - 8]
        push eax
        ; Exact mapped bytes E8 8D 72 F6 FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0x72
        __asm _emit 0xf6
        __asm _emit 0xff
        mov esp, ebp
        pop ebp
        ret
    }
}
