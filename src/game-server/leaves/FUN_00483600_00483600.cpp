// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00483600 .. +0x4DC bytes.
extern "C" __declspec(naked) void FUN_00483600_00483600() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], 0cccccccch
        mov dword ptr [ebp - 4], 0cccccccch
        mov dword ptr [ebp - 8], ecx
        push 4e2h
        push 0
        mov eax, dword ptr [ebp - 8]
        add eax, 21ch
        push eax
        ; Exact mapped bytes E8 44 5D 02 00: call 0x4a9370
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0x5d
        __asm _emit 0x02
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [ebp - 4], 1
        ; Exact mapped bytes EB 09: jmp 0x483641
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 4]
        add ecx, 1
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp - 4], 7
        ; Exact mapped bytes 0F 8F 8D 00 00 00: jg 0x4836d8
        __asm _emit 0x0f
        __asm _emit 0x8f
        __asm _emit 0x8d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [eax + edx*4 + 410h], 41200000h
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 8]
        mov dword ptr [edx + ecx*4 + 604h], 3f4ccccdh
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [ecx + eax*4 + 7f8h], 3f0ccccdh
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [eax + edx*4 + 9ech], 3e99999ah
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 8]
        mov dword ptr [edx + ecx*4 + 0be0h], 3e99999ah
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [ecx + eax*4 + 0dd4h], 3dcccccdh
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [eax + edx*4 + 0fc8h], 3dcccccdh
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 8]
        mov dword ptr [edx + ecx*4 + 11bch], 3f19999ah
        ; Exact mapped bytes E9 60 FF FF FF: jmp 0x483638
        __asm _emit 0xe9
        __asm _emit 0x60
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 8
        ; Exact mapped bytes EB 09: jmp 0x4836ea
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 4]
        add eax, 1
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 1ah
        ; Exact mapped bytes 0F 8F 8D 00 00 00: jg 0x483781
        __asm _emit 0x0f
        __asm _emit 0x8f
        __asm _emit 0x8d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 8]
        mov dword ptr [edx + ecx*4 + 410h], 3f4ccccdh
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [ecx + eax*4 + 604h], 41200000h
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [eax + edx*4 + 7f8h], 3f4ccccdh
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 8]
        mov dword ptr [edx + ecx*4 + 9ech], 3f0ccccdh
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [ecx + eax*4 + 0be0h], 3f0ccccdh
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [eax + edx*4 + 0dd4h], 3e99999ah
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 8]
        mov dword ptr [edx + ecx*4 + 0fc8h], 3e99999ah
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [ecx + eax*4 + 11bch], 3f333333h
        ; Exact mapped bytes E9 60 FF FF FF: jmp 0x4836e1
        __asm _emit 0xe9
        __asm _emit 0x60
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 1bh
        ; Exact mapped bytes EB 09: jmp 0x483793
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 4]
        add edx, 1
        mov dword ptr [ebp - 4], edx
        cmp dword ptr [ebp - 4], 25h
        ; Exact mapped bytes 0F 8F 8D 00 00 00: jg 0x48382a
        __asm _emit 0x0f
        __asm _emit 0x8f
        __asm _emit 0x8d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [ecx + eax*4 + 410h], 3f0ccccdh
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [eax + edx*4 + 604h], 3f4ccccdh
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 8]
        mov dword ptr [edx + ecx*4 + 7f8h], 41200000h
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [ecx + eax*4 + 9ech], 3f4ccccdh
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [eax + edx*4 + 0be0h], 3f4ccccdh
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 8]
        mov dword ptr [edx + ecx*4 + 0dd4h], 3f0ccccdh
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [ecx + eax*4 + 0fc8h], 3f0ccccdh
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [eax + edx*4 + 11bch], 3f4ccccdh
        ; Exact mapped bytes E9 60 FF FF FF: jmp 0x48378a
        __asm _emit 0xe9
        __asm _emit 0x60
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 26h
        ; Exact mapped bytes EB 09: jmp 0x48383c
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 4]
        add ecx, 1
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp - 4], 38h
        ; Exact mapped bytes 0F 8F 8D 00 00 00: jg 0x4838d3
        __asm _emit 0x0f
        __asm _emit 0x8f
        __asm _emit 0x8d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [eax + edx*4 + 410h], 3e99999ah
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 8]
        mov dword ptr [edx + ecx*4 + 604h], 3f0ccccdh
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [ecx + eax*4 + 7f8h], 3f4ccccdh
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [eax + edx*4 + 9ech], 41200000h
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 8]
        mov dword ptr [edx + ecx*4 + 0be0h], 41200000h
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [ecx + eax*4 + 0dd4h], 3f4ccccdh
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [eax + edx*4 + 0fc8h], 3f4ccccdh
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 8]
        mov dword ptr [edx + ecx*4 + 11bch], 3f800000h
        ; Exact mapped bytes E9 60 FF FF FF: jmp 0x483833
        __asm _emit 0xe9
        __asm _emit 0x60
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 39h
        ; Exact mapped bytes EB 09: jmp 0x4838e5
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 4]
        add eax, 1
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 4fh
        ; Exact mapped bytes 0F 8F 8D 00 00 00: jg 0x48397c
        __asm _emit 0x0f
        __asm _emit 0x8f
        __asm _emit 0x8d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 8]
        mov dword ptr [edx + ecx*4 + 410h], 3dcccccdh
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [ecx + eax*4 + 604h], 3e99999ah
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [eax + edx*4 + 7f8h], 3f0ccccdh
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 8]
        mov dword ptr [edx + ecx*4 + 9ech], 3f4ccccdh
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [ecx + eax*4 + 0be0h], 3f4ccccdh
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [eax + edx*4 + 0dd4h], 41200000h
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 8]
        mov dword ptr [edx + ecx*4 + 0fc8h], 41200000h
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [ecx + eax*4 + 11bch], 3f800000h
        ; Exact mapped bytes E9 60 FF FF FF: jmp 0x4838dc
        __asm _emit 0xe9
        __asm _emit 0x60
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 50h
        ; Exact mapped bytes EB 09: jmp 0x48398e
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 4]
        add edx, 1
        mov dword ptr [ebp - 4], edx
        cmp dword ptr [ebp - 4], 63h
        ; Exact mapped bytes 0F 8F 8D 00 00 00: jg 0x483a25
        __asm _emit 0x0f
        __asm _emit 0x8f
        __asm _emit 0x8d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [ecx + eax*4 + 410h], 3f4ccccdh
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [eax + edx*4 + 604h], 3e75c28fh
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 8]
        mov dword ptr [edx + ecx*4 + 7f8h], 3ee147aeh
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [ecx + eax*4 + 9ech], 3f23d70ah
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [eax + edx*4 + 0be0h], 3f23d70ah
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 8]
        mov dword ptr [edx + ecx*4 + 0dd4h], 3f4ccccdh
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [ecx + eax*4 + 0fc8h], 3f4ccccdh
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [eax + edx*4 + 11bch], 3f4ccccdh
        ; Exact mapped bytes E9 60 FF FF FF: jmp 0x483985
        __asm _emit 0xe9
        __asm _emit 0x60
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 64h
        ; Exact mapped bytes EB 09: jmp 0x483a37
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 4]
        add ecx, 1
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp - 4], 7dh
        ; Exact mapped bytes 0F 8D 8D 00 00 00: jge 0x483ace
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x8d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [eax + edx*4 + 410h], 3f19999ah
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 8]
        mov dword ptr [edx + ecx*4 + 604h], 3e3851ech
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [ecx + eax*4 + 7f8h], 3ea8f5c3h
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [eax + edx*4 + 9ech], 3ef5c28fh
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 8]
        mov dword ptr [edx + ecx*4 + 0be0h], 3ef5c28fh
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [ecx + eax*4 + 0dd4h], 3f19999ah
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [eax + edx*4 + 0fc8h], 3f19999ah
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 8]
        mov dword ptr [edx + ecx*4 + 11bch], 3f19999ah
        ; Exact mapped bytes E9 60 FF FF FF: jmp 0x483a2e
        __asm _emit 0xe9
        __asm _emit 0x60
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 8
        cmp ebp, esp
        ; Exact mapped bytes E8 08 4D 02 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0x4d
        __asm _emit 0x02
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
